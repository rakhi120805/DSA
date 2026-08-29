1# Definition for singly-linked list.
2# class ListNode(object):
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution(object):
7    def deleteMiddle(self, head):
8        """
9        :type head: Optional[ListNode]
10        :rtype: Optional[ListNode]
11        """
12        if head is None or head.next is None:
13            return None
14        slow=head
15        fast=head
16        while fast and fast.next:
17            slow=slow.next
18            fast=fast.next.next
19        temp=head
20        while temp.next!=slow:
21            temp=temp.next
22        
23        temp.next=slow.next
24        del(slow)
25        return head
26        