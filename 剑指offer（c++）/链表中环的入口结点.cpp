class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        ListNode* fast = pHead;
        ListNode* slow = pHead;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            //����ָ�� �� ��ָ������ʱ
            if(fast == slow){
                fast = pHead;
                //�ٴ�����
                while(fast != slow){
                    fast = fast->next;
                    slow = slow->next;
                }
                return fast;
            }
        }
        return NULL;
    }
};