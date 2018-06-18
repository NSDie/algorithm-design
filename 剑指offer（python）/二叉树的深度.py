class Solution:    
	def TreeDepth(self, pRoot):         
		if pRoot==None:
			return 0       
		return max(self.TreeDepth(pRoot.left),self.TreeDepth(pRoot.right))+1