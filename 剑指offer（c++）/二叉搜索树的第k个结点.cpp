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
    int count=0;
public:
    
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        if(pRoot)
        {
            TreeNode* node = KthNode(pRoot->left,k);
            if(node)
                return node;
            count++;
            if(count==k)
                return pRoot;
            node = KthNode(pRoot->right,k);
            if(node)
                return node;
        }
        return nullptr;
    }
};