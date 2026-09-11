class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int start=0, end=nums.size()-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(mid==0 || mid == nums.size()-1) return nums[mid];
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            else if(nums[mid]==nums[mid-1]){
                if(mid%2==0) end=mid-1;
                else start=mid+1;
            }
            else{
                if(mid%2 ==0) start=mid+1;
                else end=mid-1;
            }
        }
        return -1;
    }
};