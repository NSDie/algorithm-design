

# -*- coding:utf-8 -*-class Solution:
    def NumberOf1(self, n):
        # write code here
        return bin(n).replace("0b","").count("1") if n>=0 else bin(2**32+n).replace("0b","").count("1")