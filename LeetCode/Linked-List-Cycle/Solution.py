1# Definition for singly-linked list.
2# class ListNode(object):
3#     def __init__(self, x):
4#         self.val = x
5#         self.next = None
6
7class Solution(object):
8    def hasCycle(self, head):
9        """
10        :type head: ListNode
11        :rtype: bool
12        """
13        slow,fast=head,head
14        while fast and fast.next:
15            slow=slow.next
16            fast=fast.next.next
17            if fast==slow:
18                return True
19        return False
20
21        