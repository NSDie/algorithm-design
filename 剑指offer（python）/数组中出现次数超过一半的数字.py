# -*- coding:utf-8 -*-
from collections import Counter 
class Solution:
    def MoreThanHalfNum_Solution(self, numbers):
        # write code here
        return Counter(numbers).most_common(1)[0][0] if Counter(numbers).most_common(1)[0][1]*2 > len(numbers) else 0