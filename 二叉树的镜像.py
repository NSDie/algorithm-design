class Solution:
     def Mirror(self, root):
        # write code here
        if not root:
            return root
        node=root.left
        root.left=root.right
        root.right=node
        self.Mirror(root.left)
        self.Mirror(root.right)
        return root