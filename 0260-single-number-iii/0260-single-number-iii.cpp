class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            if (mpp.find(nums[i]) != mpp.end()) {
                mpp[nums[i]]++;
            } else
                mpp.insert({nums[i], 1});
        }
        vector<int> ans;
        for (auto i : mpp) {
            if (i.second == 1)
                ans.push_back(i.first);
        }
        return ans;
    }
};
