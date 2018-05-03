class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(pNode==NULL)
            return NULL;
        if(pNode->right!=NULL)
        {
          pNode=pNode->right;
          while(pNode->left!=NULL)
              pNode=pNode->left;
          return pNode;
        }
        while(pNode->next!=NULL)
        {
           TreeLinkNode *proot=pNode->next;
           if(proot->left==pNode)
               return proot;
           pNode=pNode->next;
        }
        return NULL;
    }
};