class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int s=nums.size();
        sort(nums.begin(),nums.end());
        int prod1= nums[s-1] * nums[s-2] * nums[s-3];
        int prod2= nums[0]*nums[1]*nums[s-1];

        int ans = max(prod1,prod2);
        return ans;
    }
};