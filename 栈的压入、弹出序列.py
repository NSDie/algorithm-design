# -*- coding:utf-8 -*-
##����ʱ�䣺47ms  ռ���ڴ棺5624k
class Solution:
    def IsPopOrder(self, pushV, popV):
        # write code here
        stack=[]
        while popV:
            if stack and stack[-1]==popV[0]:
                stack.pop()
                popV.pop(0)
            elif pushV:
                stack.append(pushV.pop(0))
            else:
                return False
        return True    
                