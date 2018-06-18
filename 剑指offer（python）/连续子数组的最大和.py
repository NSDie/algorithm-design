# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.re=[]
    def FindGreatestSumOfSubArray(self, array):
        # write code here
        a=[]
        if len(array)==1:
            self.re.append(array[0])
            return 
        count=0
        for each in array:
            count+=each
            a.append(count)
        self.re.extend(a)
        self.FindGreatestSumOfSubArray(array[1:])
        return max(self.re)