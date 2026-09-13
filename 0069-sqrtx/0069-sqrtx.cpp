class Solution {
public:
    int mySqrt(int x) {
        int start=1; int end=x;
        int mid;
        int ans=0;
        if(x==0 || x==1) return x;
        while(start<=end){
            mid=start+(end-start)/2;
            if(x/mid==mid) return mid;
            else if(x/mid>mid){
                ans=mid;
                start=mid+1;
            } 
            else end=mid-1;
            
            
        }
        return ans;
        
    }
};