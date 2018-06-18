# -*- coding:utf-8 -*-
from collections import Counter
class Solution:
    # 返回[a,b] 其中ab是出现一次的两个数字
    def FindNumsAppearOnce(self, array):
        # write code here
        return list(map(lambda c:c[0],Counter(array).most_common()[-2:]))