#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

ll M = 998244353;

vector<vector<int>> adj;
vector<ll> A;
vector<int> parent;
vector<int> sz;
vector<int> depth;
vector<int> heavy;
vector<int> head;
vector<int> pos;
vector<int> path_id;
vector<int> path_leaf;
vector<bool> is_leaf;
vector<ll> hash_val;
vector<ll> prod_light_nonzero;
vector<int> zero_count_light;
vector<vector<pair<ll, ll>>> segtree;
vector<vector<int>> path_nodes;
int current_path_id = 0;
int current_pos = 0;

ll pow_mod(ll a, ll b) {
    ll res = 1;
    a %= M;
    while (b > 0) {
        if (b % 2 == 1) res = (res * a) % M;
        a = (a * a) % M;
        b /= 2;
    }
    return res;
}

ll mod_inv(ll n) {
    return pow_mod(n, M - 2);
}

pair<ll, ll> compose(pair<ll, ll> f1, pair<ll, ll> f2) {
    ll a1 = f1.first, b1 = f1.second;
    ll a2 = f2.first, b2 = f2.second;
    ll new_a = (a1 * a2) % M;
    ll new_b = (a1 * b2 + b1) % M;
    return {new_a, new_b};
}

void segtree_build(int p_id, int n, int L, int R) {
    if (L == R) {
        int v = path_nodes[p_id][L];
        ll a_v = 0, b_v = 0;
        if (is_leaf[v]) {
            a_v = 0;
            b_v = A[v];
        } else {
            a_v = (zero_count_light[v] > 0) ? 0 : prod_light_nonzero[v];
            b_v = A[v];
        }
        segtree[p_id][n] = {a_v, b_v};
        return;
    }
    int mid = (L + R) / 2;
    segtree_build(p_id, 2 * n, L, mid);
    segtree_build(p_id, 2 * n + 1, mid + 1, R);
    segtree[p_id][n] = compose(segtree[p_id][2 * n], segtree[p_id][2 * n + 1]);
}

void segtree_update(int p_id, int n, int L, int R, int target_pos, pair<ll, ll> val) {
    if (L == R) {
        segtree[p_id][n] = val;
        return;
    }
    int mid = (L + R) / 2;
    if (target_pos <= mid) {
        segtree_update(p_id, 2 * n, L, mid, target_pos, val);
    } else {
        segtree_update(p_id, 2 * n + 1, mid + 1, R, target_pos, val);
    }
    segtree[p_id][n] = compose(segtree[p_id][2 * n], segtree[p_id][2 * n + 1]);
}

pair<ll, ll> segtree_query(int p_id, int n, int L, int R, int qL, int qR) {
    if (qL > R || qR < L) return {1, 0};
    if (qL <= L && R <= qR) return segtree[p_id][n];
    int mid = (L + R) / 2;
    pair<ll, ll> left = segtree_query(p_id, 2 * n, L, mid, qL, qR);
    pair<ll, ll> right = segtree_query(p_id, 2 * n + 1, mid + 1, R, qL, qR);
    return compose(left, right);
}

void dfs_sz(int v) {
    sz[v] = 1;
    int max_sz_child = 0;
    heavy[v] = 0;
    for (int c : adj[v]) {
        depth[c] = depth[v] + 1;
        parent[c] = v;
        dfs_sz(c);
        sz[v] += sz[c];
        if (sz[c] > max_sz_child) {
            max_sz_child = sz[c];
            heavy[v] = c;
        }
    }
}

void dfs_hld(int v, int h, int p_id) {
    head[v] = h;
    path_id[v] = p_id;
    pos[v] = current_pos++;
    path_nodes[p_id].push_back(v);
    path_leaf[p_id] = v;

    if (heavy[v] != 0) {
        dfs_hld(heavy[v], h, p_id);
    }

    for (int c : adj[v]) {
        if (c != heavy[v]) {
            current_pos = 0;
            dfs_hld(c, c, ++current_path_id);
        }
    }
}

ll dfs_hash(int v) {
    if (is_leaf[v]) {
        hash_val[v] = A[v];
        return hash_val[v];
    }

    prod_light_nonzero[v] = 1;
    zero_count_light[v] = 0;
    ll f_heavy = 1;

    for (int c : adj[v]) {
        ll f_c = dfs_hash(c);
        if (c == heavy[v]) {
            f_heavy = f_c;
        } else {
            if (f_c == 0) {
                zero_count_light[v]++;
            } else {
                prod_light_nonzero[v] = (prod_light_nonzero[v] * f_c) % M;
            }
        }
    }

    ll prod_all_light = (zero_count_light[v] > 0) ? 0 : prod_light_nonzero[v];
    hash_val[v] = (A[v] + prod_all_light * f_heavy) % M;
    return hash_val[v];
}

ll get_path_hash(int p_id) {
    int v_leaf = path_leaf[p_id];
    int path_len = path_nodes[p_id].size();
    pair<ll, ll> path_func = segtree_query(p_id, 1, 0, path_len - 1, 0, path_len - 1);

    ll f_heavy_leaf = 1;
    if (heavy[v_leaf] != 0) {
        f_heavy_leaf = hash_val[heavy[v_leaf]];
    }

    return (path_func.first * f_heavy_leaf + path_func.second) % M;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    adj.resize(N + 1);
    A.resize(N + 1);
    parent.resize(N + 1, 0);
    sz.resize(N + 1, 0);
    depth.resize(N + 1, 0);
    heavy.resize(N + 1, 0);
    head.resize(N + 1, 0);
    pos.resize(N + 1, 0);
    path_id.resize(N + 1, 0);
    path_leaf.resize(N + 1, 0);
    is_leaf.resize(N + 1, true);
    hash_val.resize(N + 1, 0);
    prod_light_nonzero.resize(N + 1, 1);
    zero_count_light.resize(N + 1, 0);
    path_nodes.resize(N + 1);

    for (int i = 2; i <= N; ++i) {
        int p;
        cin >> p;
        adj[p].push_back(i);
        is_leaf[p] = false;
    }

    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }

    dfs_sz(1);
    current_pos = 0;
    current_path_id = 0;
    dfs_hld(1, 1, 0);
    dfs_hash(1);

    segtree.resize(current_path_id + 1);
    for (int i = 0; i <= current_path_id; ++i) {
        int path_len = path_nodes[i].size();
        if (path_len > 0) {
            segtree[i].resize(4 * path_len);
            segtree_build(i, 1, 0, path_len - 1);
        }
    }

    for (int q = 0; q < Q; ++q) {
        int v;
        ll x;
        cin >> v >> x;
        A[v] = x;

        int curr = v;
        while (curr != 0) {
            int p_id = path_id[curr];
            int v_head = head[curr];
            int p = parent[v_head];

            ll a_v = 0, b_v = 0;
            if (is_leaf[curr]) {
                a_v = 0;
                b_v = A[curr];
            } else {
                a_v = (zero_count_light[curr] > 0) ? 0 : prod_light_nonzero[curr];
                b_v = A[curr];
            }
            segtree_update(p_id, 1, 0, path_nodes[p_id].size() - 1, pos[curr], {a_v, b_v});

            ll old_f_head = hash_val[v_head];
            ll new_f_head = get_path_hash(p_id);
            hash_val[v_head] = new_f_head;

            if (p == 0 || old_f_head == new_f_head) {
                break;
            }

            if (old_f_head == 0) {
                zero_count_light[p]--;
            } else {
                prod_light_nonzero[p] = (prod_light_nonzero[p] * mod_inv(old_f_head)) % M;
            }

            if (new_f_head == 0) {
                zero_count_light[p]++;
            } else {
                prod_light_nonzero[p] = (prod_light_nonzero[p] * new_f_head) % M;
            }
            
            curr = p;
        }
        cout << hash_val[1] << "\n";
    }

    return 0;
}