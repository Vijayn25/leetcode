class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* back = dummy;
        while(head && head->next){
            back->next = head->next;
            back = back->next;
            head->next = back->next;
            back->next = head;
            back = back->next;
            head = head->next;
        }
        head = dummy->next;
        delete dummy;
        return head;
    }
};
