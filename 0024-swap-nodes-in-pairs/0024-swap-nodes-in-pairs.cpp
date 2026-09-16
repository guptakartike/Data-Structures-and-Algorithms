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

    ListNode * func(ListNode* &head){
        if(head==NULL || head->next==NULL) return head;
        ListNode *nextHead=func(head->next->next);
        ListNode *newHead=head->next;
        newHead=head->next;
        head->next->next=head;
        head->next=NULL;
        
        head->next=nextHead;
        return newHead;
    }

    ListNode* swapPairs(ListNode* head) {
        return func(head);
    }
};