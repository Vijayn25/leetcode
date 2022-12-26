/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* first = head;
        ListNode* last = head;
        while(first->next != NULL && first->next->next!=NULL){
            first = first->next->next;
            last = last->next;
            if(first == last){
                return true;
            }
        }
        return false;
    }
};
