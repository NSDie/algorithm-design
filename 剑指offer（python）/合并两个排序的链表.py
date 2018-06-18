# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    # 返回合并后列表
    def Merge(self, pHead1, pHead2):
        # write code here
        res = []
        while pHead1:
            res.append(pHead1.val)
            pHead1=pHead1.next
        while pHead2:
            res.append(pHead2.val)
            pHead2=pHead2.next
        res.sort()
        new = ListNode(0)
        pre = new
        for i in res:
            node = ListNode(i)
            pre.next = node
            pre = pre.next
        return new.next