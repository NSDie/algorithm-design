# -*- coding:utf-8 -*-
from collections import Counter
class Solution:
    # ����[a,b] ����ab�ǳ���һ�ε���������
    def FindNumsAppearOnce(self, array):
        # write code here
        return list(map(lambda c:c[0],Counter(array).most_common()[-2:]))