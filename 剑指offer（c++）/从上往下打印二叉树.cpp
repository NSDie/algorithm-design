class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* rt) {
        queue<TreeNode*> q;
        q.push(rt);
        vector<int> r;
        while(!q.empty()){
            rt = q.front(); 
            q.pop();
            if(!rt) continue;
            r.push_back(rt -> val);
            q.push(rt -> left);
            q.push(rt -> right);
        }
        return r;
    }
};