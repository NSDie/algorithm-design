class Solution {
public:
        vector<vector<int> > Print(TreeNode* pRoot) {
            vector<vector<int>> vec;
            if(pRoot == NULL) return vec;
            
            queue<TreeNode*> q;
            q.push(pRoot);
            
            while(!q.empty()){
                int lo = 0, hi = q.size();
                vector<int> c;
                while(lo++ < hi){
                    TreeNode *t = q.front();
                    q.pop();
                    c.push_back(t->val);
                    if(t->left) q.push(t->left);
                    if(t->right) q.push(t->right);
                }
                vec.push_back(c);
            }
            return vec;
        }
    
};