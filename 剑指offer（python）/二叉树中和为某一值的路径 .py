class Solution:
    # ���ض�ά�б��ڲ�ÿ���б��ʾ�ҵ���·��
    def FindPath(self, root, expectNumber):
        # write code here
        if not root:
            return []
        result = []
        
        def FindResPath(root,path,sum):
            path.append(root)
            if sum == root.val and root.left == None and root.right == None:
                onePath=[]
                for node in path:
                    onePath.append(node.val)
                result.append(onePath)
            else:
                if root.left:
                    FindResPath(root.left,path,sum-root.val)
                if root.right:
                    FindResPath(root.right,path,sum-root.val)
            path.pop()
        
        FindResPath(root,[],expectNumber)
        return result