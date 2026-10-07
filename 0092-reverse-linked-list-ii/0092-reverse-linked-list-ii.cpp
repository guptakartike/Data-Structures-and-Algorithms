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
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode * newHead = rev(head->next);
        ListNode * front = head->next;
        front->next=head;
        head->next=NULL;
        return newHead;
    }
    ListNode* reverseBetween(ListNode* head, int a, int b) {
        ListNode * dummy = new ListNode(-1);
        ListNode * prev = dummy;
        dummy->next=head;
        
        while(a!=1){
            prev=prev->next;
            a--,b--;
        }
        ListNode * temp = prev->next;
        prev->next=NULL;
        ListNode * tempHead = temp;
        
        while(b!=1){
            temp=temp->next;
            b--;
        }
        
        ListNode *tempTail=temp;
        ListNode * tail = tempTail->next;
        tempTail->next = NULL;
        
        
        ListNode * newHead=rev(tempHead);
        prev->next=newHead;
        
        temp=dummy;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=tail;
        return dummy->next;
    }
};