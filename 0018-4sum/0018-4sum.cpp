class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n<4){
            // ans.push_back(0);
            return ans;
        }
        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int left=j+1, right=n-1;
                while(left<right){
                    long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target){
                        vector<int>temp={nums[i],nums[j],nums[left],nums[right]};
                        ans.push_back(temp);
                        while(left<right && nums[left]==nums[left+1]) left++;
                        while(left<right && nums[right]==nums[right-1]) right--;
                        left++,right--;
                    }
                    else if(sum<target) left++;
                    else right--;
                }

            }
        }
        return ans;
    }
};