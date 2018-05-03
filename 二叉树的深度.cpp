#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution {
    public:    
    int TreeDepth(TreeNode* pRoot){
        if(!pRoot) return 0 ;
        return max(1+TreeDepth(pRoot->left), 1+TreeDepth(pRoot->right));
   }
};

int main()
{
	TreeNode* root;
	root =(TreeNode*)malloc(sizeof(TreeNode));
	root -> val =0;
	root -> left=NULL;
	root -> right=NULL;
	Solution s;
	cout<<s.TreeDepth(root);
}
