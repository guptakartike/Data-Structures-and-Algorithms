class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st; 
        int n=heights.size();
        int ans=0;
        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int index=st.top();
                st.pop();

                if(!st.empty()){
                    ans=max(ans,heights[index]*(i-st.top()-1));
                }
                else ans =max(ans,heights[index]*i);
            }
            st.push(i);
        }

        while(!st.empty()){
            int index=st.top();
            st.pop();
            if(!st.empty()){
                    ans=max(ans,heights[index]*(n-st.top()-1));
                }
            else ans =max(ans,heights[index]*n);
        }
        return ans;
    }
};