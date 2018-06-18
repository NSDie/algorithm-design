class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL)
            return NULL;
        ListNode* pNode=pHead;//��ǰָ��
        ListNode* pReverseHead=NULL;//�������ͷָ��
        ListNode* pPrev=NULL;//��ǰָ���ǰһ�����
        while(pNode!=NULL){//��ǰ��㲻Ϊ��ʱ��ִ��
            ListNode* pNext=pNode->next;//���Ͽ�֮ǰһ��Ҫ����Ͽ�λ�ú�ߵĽ��
            if(pNext==NULL)//��pNextΪ��ʱ��˵����ǰ���Ϊβ�ڵ�
                pReverseHead=pNode;
            pNode->next=pPrev;//ָ�뷴ת
            pPrev=pNode;
            pNode=pNext;
    }
        return pReverseHead;
    }
};