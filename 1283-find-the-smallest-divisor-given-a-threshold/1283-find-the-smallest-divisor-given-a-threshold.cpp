class Solution {
public:

    long long result(vector<int>& nums, int &mid){
        long long sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=(nums[i]+mid-1)/mid;
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=0;
        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi,nums[i]);
        }
        int start=1, end=maxi;

        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(result(nums,mid)<=threshold){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};