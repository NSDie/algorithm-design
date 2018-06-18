class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        if (pRoot == NULL)
            return ;
        TreeNode* tmp = pRoot->left;
        pRoot->left = pRoot->right;
        pRoot->right = tmp;
        Mirror(pRoot->left);
        Mirror(pRoot->right);
    }
};