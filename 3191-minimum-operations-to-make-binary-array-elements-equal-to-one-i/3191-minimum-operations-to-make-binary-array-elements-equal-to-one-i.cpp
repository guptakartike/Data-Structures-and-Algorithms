class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i=0; 
        int j=0;
        int count=0;
        while(i<=nums.size()-3){
            while(i < nums.size() && nums[i]!=0){
                i++;
            }

            if(i > nums.size()-3) break;

            j=i;
            while(j-i+1<3){
                j++;
            }
            for(int k=i; k<=j; k++){
                if(nums[k]==0) nums[k]=1;
                else nums[k]=0;
                count++;
            }
        }
        for(int k=0; k<nums.size(); k++){
            if(nums[k]==0) return -1;
        }
        return count/3;
    }
};