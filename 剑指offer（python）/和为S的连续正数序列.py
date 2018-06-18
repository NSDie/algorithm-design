#- * -coding: utf - 8 - * -
class Solution:
  def FindContinuousSequence(self, tsum):
    #write code here res = []
	for i in range(1, tsum //2+1):
      sumRes=i
      for j in range(i+1,tsum//2+2):
        sumRes+=j
        if sumRes==tsum:
          res.append(list(range(i,j+1)))
          break
        elif sumRes>tsum:
          break
          return res