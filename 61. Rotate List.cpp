/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
        return head;
        ListNode* dummy = head;
        int count = 1;
        while(dummy->next != NULL){
            dummy = dummy->next;
            count++;
        }
        dummy->next = head;
        k=k%count;
        k = count-k;
        while(k--)
        dummy=dummy->next;
        head = dummy->next;
        dummy->next=NULL;
        return head;
    }
};
