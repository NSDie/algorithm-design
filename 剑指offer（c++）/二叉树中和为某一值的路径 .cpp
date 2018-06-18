class Solution {
public:
    vector<vector<int> > res;
    vector<int> path;
    void find(TreeNode* root, int sum){
        if(root == NULL) return;
        path.push_back(root->val);
        if(sum == root->val && !root->right && !root->left)
            res.push_back(path);
        else{
                find(root->left,sum - root->val);
                find(root->right,sum - root->val);
        }
        path.pop_back();
            
    }
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        find(root,expectNumber);
        return res;
    }
};