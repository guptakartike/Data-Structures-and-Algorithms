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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy=new ListNode(-1);
        ListNode *temp=dummy;
        dummy->next=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->next->val==val){
                ListNode*delNode = temp->next;
                temp->next=temp->next->next;
                delete(delNode);
            }
            else temp=temp->next;
        }
        
        return dummy->next;

    }
};