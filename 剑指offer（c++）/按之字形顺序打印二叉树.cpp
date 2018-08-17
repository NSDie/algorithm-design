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
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<vector<int> > res;
        if(pRoot == NULL)
            return res;
        queue<TreeNode*> que;
        que.push(pRoot);
        bool even = false;
        while(!que.empty()){
            vector<int> vec;
            int size = que.size();  //这步很关键，后面直接操作que，que.size()可能会一直变。
            for(int i=0;i<size;i++){
                TreeNode* tmp = que.front();
                que.pop();
                vec.push_back(tmp->val);
                if(tmp->left != NULL)
                    que.push(tmp->left);
                if(tmp->right != NULL)
                    que.push(tmp->right);
            }
            if(even)
                std::reverse(vec.begin(), vec.end());
            res.push_back(vec);
            even = !even;
        }
        return res;
    }
    
};