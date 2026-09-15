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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        if(count==n){
            ListNode*newHead=head->next;
            delete(head);
            return newHead;
        }
        while(count-n>1){
            count--;
            temp=temp->next;
        }
      
            ListNode*delNode=temp->next;
            temp->next=temp->next->next;
            delete(delNode);
        

        
        return head;
        
    }
};