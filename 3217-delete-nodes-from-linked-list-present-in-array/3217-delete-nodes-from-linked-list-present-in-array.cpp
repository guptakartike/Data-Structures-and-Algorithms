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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st;
        for(int i=0; i<nums.size();i++){
            st.insert(nums[i]);
        }
        ListNode *dummy=new ListNode(-1);
        ListNode *prev=dummy;
        ListNode *temp=head;
        dummy->next=head;
        while(temp!=NULL){
            if(st.find(temp->val) != st.end()){
                // ListNode *delNode=temp;
                temp=temp->next;
                prev->next=temp;
                // delete(delNode);
            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        return dummy->next;
    }
};