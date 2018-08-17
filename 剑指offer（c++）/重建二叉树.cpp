/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in) {
    int n=pre.size();
	if(n==0)
		return NULL;
	vector<int >pre_left,pre_right,in_left,in_right;
	int a=pre[0];
	TreeNode *root = new TreeNode(a);
	int i;
	for(i=0;i<pre.size();i++)
		if(a==in[i])
			break;
	for(int j=0;j<i;j++){
		pre_left.push_back(pre[j+1]);    
		in_left.push_back(in[j]);
	}
	for(int j=i+1;j<n;j++){
		pre_right.push_back(pre[j]);
		in_right.push_back(in[j]);
	}
	root->left=reConstructBinaryTree(pre_left,in_left);
	root->right=reConstructBinaryTree(pre_right,in_right);
	return root;

    }
};