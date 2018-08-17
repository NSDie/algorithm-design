class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(!pListHead) return nullptr;
        ListNode* p = pListHead;
        ListNode* pre = pListHead;
        int count=0;
        while(p){
            p = p->next;
            if(count>=k){
                pre = pre->next;
            }
            count++;
        }
        if(count<k) return nullptr;
        return pre;
    }
};