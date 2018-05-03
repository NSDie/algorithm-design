/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
        if(pRoot==NULL) return true;
        return isSame(pRoot->left,pRoot->right);
    }
    bool isSame(TreeNode* p1,TreeNode* p2)
    {
        if(p1==NULL&&p2!=NULL) return false;
        if(p1!=NULL&&p2==NULL) return false;
        if(p1==NULL&&p2==NULL) return true; //左右子树都走到头了。
        if(p1->val==p2->val) 
            return isSame(p1->left,p2->right) && isSame(p1->right,p2->left);
        else
            return false;
    }

};