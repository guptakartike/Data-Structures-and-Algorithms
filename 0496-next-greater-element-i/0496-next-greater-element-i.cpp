class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size(),-1);
        for(int i=0; i<nums1.size(); i++){
            int el=-1;

            int k=0;
            while(nums2[k] != nums1[i]){
                k++;
            }

            for(int j=k+1; j<nums2.size(); j++){
                if(nums1[i]<nums2[j]){
                    el=nums2[j];
                    break;
                }
                
            }
            ans[i]=(el);
        }
        return ans;

    }
};