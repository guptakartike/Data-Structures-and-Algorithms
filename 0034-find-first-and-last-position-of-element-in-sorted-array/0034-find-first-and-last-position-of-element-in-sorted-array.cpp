class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1;
        int idx1=-1, idx2=-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                idx1=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;            
            }
            else{
                end=mid-1;
            }
        }
        start=0, end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                idx2=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;            
            }
            else{
                end=mid-1;
            }
        }
        vector<int>ans;
        ans.push_back(idx1);
        ans.push_back(idx2);
        return ans;
    }
};