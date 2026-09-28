class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            nums.push_back(nums[i]);
        }

        stack<int>st;
        vector<int>ans(2*n,-1);
        for(int i=0; i<2*n; i++){
            
            while(!st.empty() && nums[i]>nums[st.top()]){
                ans[st.top()]=nums[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int> result(n,-1);

        for(int i = 0; i < n; i++){
            result[i] = ans[i];
        }
        return result;

    }
};