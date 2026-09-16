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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* recHead=dummy;
        int pos=left;
        while(pos>1){
            recHead=recHead->next;
            pos--;
        }

        ListNode* temp = recHead->next;
        ListNode * prev = nullptr;
     
        int count = right-left+1;
        
        while(count){
            ListNode * front = temp->next;
            temp->next = prev;
            prev=temp;
            temp=front;  
            count--;         
        }
        recHead->next->next=temp;
        recHead->next=prev;
        return dummy->next;

    }
};