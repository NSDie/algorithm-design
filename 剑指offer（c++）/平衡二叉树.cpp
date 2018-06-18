class Solution {
public:
    //���������������������������������߶ȣ��ж��Ƿ�ƽ��
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