class Solution {
public:
    //后续遍历二叉树，遍历过程中求子树高度，判断是否平衡
    bool IsBalanced(TreeNode* pRoot,int & dep){
        if (pRoot==NULL){
            return true;
        }
        int left=0;
        int right=0;
        if(IsBalanced(pRoot->left,left) && IsBalanced(pRoot->right,right)){
            int dif = left - right;
            if(dif < -1||dif > 1)
                return false;
            dep = (left > right ? left : right) + 1;
            return true;
        }
        return false;
    }
    bool IsBalanced_Solution(TreeNode* pRoot) {
        int dep = 0;
        return IsBalanced(pRoot,dep);
    }
};