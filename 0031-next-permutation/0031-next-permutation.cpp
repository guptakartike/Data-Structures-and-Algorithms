class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx = -1;
        
        for(int i=n-1; i>0; i--){
            if(nums[i]>nums[i-1]){
                idx=i-1;
                break;
            } 
        }
        if(idx==-1){
            int start = 0, end = n-1;
            while(start<=end){
                swap(nums[start],nums[end]);
                start++,end--;
            }
            return ;
        }
        
        for(int i=n-1; i>0; i--){
            if(nums[idx]<nums[i]){
                swap(nums[idx],nums[i]);
                break;
            }
        }

        int start = idx+1, end = n-1; 
        while(start<=end){
            swap(nums[start],nums[end]);
            start++,end--;
        }
        return;
        


    }
};