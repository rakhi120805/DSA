1# Definition for singly-linked list.
2# class ListNode(object):
3#     def __init__(self, x):
4#         self.val = x
5#         self.next = None
6
7class Solution(object):
8    def detectCycle(self, head):
9        """
10        :type head: ListNode
11        :rtype: ListNode
12        """
13        mpp={}
14        curr=head
15        while curr:
16            if curr in mpp:
17                return curr
18            mpp[curr]=True
19            curr=curr.next
20        return None
21        
22        return curr
23
24
25        