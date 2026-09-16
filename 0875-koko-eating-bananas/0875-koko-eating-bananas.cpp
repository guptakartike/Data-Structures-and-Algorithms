class Solution {
public:

    long long result(vector<int>& piles, int &mid){
        long long sum=0;
        for(int i=0; i<piles.size(); i++){
            sum+=(piles[i]+mid-1)/mid;
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
        for(int i=0; i<piles.size(); i++){
            maxi=max(maxi,piles[i]);
        }
        int start=1, end=maxi;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(result(piles,mid)<=h){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};