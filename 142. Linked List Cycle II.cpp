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
    ListNode *detectCycle(ListNode *head) {
        ListNode *first = head;
        ListNode *last = head;
        bool isCycleFound = false;
        while(first != NULL && first->next!=NULL){
            last = last->next;
            first = first->next->next;
            if(first==last){
                isCycleFound = true;
                break;
            }
        }
        if(isCycleFound==false){
            return NULL;
        }
        last = head;
        while(last!=first){
        last = last->next;
        first = first->next;
        }
        return last;
    }
};
