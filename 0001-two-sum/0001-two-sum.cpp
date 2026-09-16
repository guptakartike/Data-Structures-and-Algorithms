class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int>mpp;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            int remain = target-nums[i];
            if(mpp.find(remain)!=mpp.end()) return {mpp[remain],i};
            mpp[nums[i]]=i;
        }
        return ans;
    }
};