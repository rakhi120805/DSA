1# Definition for singly-linked list.
2# class ListNode(object):
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution(object):
7    def reverseList(self, head):
8        """
9        :type head: Optional[ListNode]
10        :rtype: Optional[ListNode]
11        """
12        stack=[]
13        dummy=ListNode()
14        t=dummy
15        while(head):
16            stack.append(head)
17            head=head.next
18        
19        while(len(stack)>0):
20            top=stack.pop()
21            t.next=top
22            t=t.next
23        
24        t.next=None
25        return dummy.next
26
27
28
29        