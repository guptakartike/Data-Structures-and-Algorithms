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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode * temp= head;
        vector<ListNode*> ans;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }


        int num=count/k;
        int rem=count%k;
        
        temp=head;
        ListNode*tempHead = head;
        
        for(int i=0; i<k; i++){
            int tempSize = num;
            if(rem>0){
                tempSize++;
                rem--;
            }
            while(tempSize>1){
                temp=temp->next;
                tempSize--;
            }
            if(tempSize == 0){
                ans.push_back(NULL);
                continue;
            }
            ListNode *front=temp->next;
            temp->next=NULL;
            ans.push_back(tempHead);
            tempHead=front;
            temp=front;
        }
        return ans;
    }
};