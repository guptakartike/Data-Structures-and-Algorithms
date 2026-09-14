class Solution {
public:

    long long totalSum(vector<int>& piles, int &mid){
        long long sum=0;
        for(int i=0; i<piles.size(); i++){
            sum+=(piles[i]+mid-1)/mid;
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
        for(int i=0; i<piles.size(); i++) maxi=max(maxi,piles[i]);
        int start=1; int end=maxi;
        int ans=0;
        
        while(start<=end){
            int mid = start+(end-start)/2;
            if(totalSum(piles,mid)>h) start=mid+1;
            else{
                ans=mid;
                end=mid-1;
                
            }
        }
        return ans;
    }
};