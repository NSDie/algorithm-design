/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree == nullptr) return nullptr;
        TreeNode* pre = nullptr;
        convert(pRootOfTree,pre);
        TreeNode* res=pRootOfTree;
        while(res->left)
            res=res->left;
        return res;
    }
    void convert(TreeNode* cur, TreeNode*& pre)
    {
        if(cur == nullptr)  return;//nullptr 表示 空指针的意思  跟NULL类似但更符合
        convert(cur->left,pre);
        cur->left=pre;
        if(pre)pre->right=cur;
        pre=cur;
        convert(cur->right,pre);
    }
};