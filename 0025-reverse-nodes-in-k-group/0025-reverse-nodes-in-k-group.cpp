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

    ListNode* rev(ListNode * head){
        if(head==NULL || head->next==NULL) return head;
        ListNode *newHead= rev(head->next);
        ListNode *front=head->next;
        head->next=NULL;
        front->next=head;
        return newHead;
    }

    ListNode*func(ListNode *head, int &k){
        if(head==NULL || head->next==NULL) return head;
        ListNode*temp = head;
        int pos=k;

        while(pos>1){
            temp=temp->next;
            if(temp == NULL) return head;
            pos--;
            
        }
        ListNode*futureHead = temp->next;    
        temp->next=NULL;
        
        ListNode *nextHead = func(futureHead,k);
        ListNode *newHead= rev(head);
        head->next=nextHead;
        return newHead;

        
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        
        return func(head,k);


    }
};