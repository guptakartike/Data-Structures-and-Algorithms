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
        if(head==NULL||head->next==NULL) return head;
      ListNode *node1=head;
      int cnt=0;
      ListNode *slow=head,*fast=head;
      while(node1){
        cnt++;
        node1=node1->next;
      }
      if(cnt==k) return head;
      k=k%cnt;
      while(k){
        fast=fast->next;
        k--;
      } 
      while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
      }
      fast->next=head;
      ListNode *newhead=slow->next;
      slow->next=NULL;
      return newhead;
    }
};