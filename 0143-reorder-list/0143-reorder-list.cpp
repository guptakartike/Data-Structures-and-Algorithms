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
    ListNode * rev(ListNode *head){
        if(head==NULL || head->next==NULL) return head;
        ListNode * newHead = rev(head->next);
        ListNode * front = head->next;
        front->next = head;
        head->next=NULL;
        return newHead;

    }
    void reorderList(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast->next != NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode * curr = slow->next;
        slow->next=NULL;
        curr =  rev(curr);

        ListNode *temp1 = head;
        ListNode *temp2 = curr;

        ListNode *dummy = new ListNode(-1);
        ListNode *temp=dummy;
        while(temp2!=NULL){
            temp->next=temp1;
            temp=temp->next;
            temp1=temp1->next;

            temp->next=temp2;
            temp=temp->next;
            temp2=temp2->next;
        }
        if(temp1) temp->next=temp1;
        
    }
};