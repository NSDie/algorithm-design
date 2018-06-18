# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.arr=[]
    def push(self, node):
        # write code here
        self.arr.append(node)
    def pop(self):
        # return xx
        return self.arr.pop(0)