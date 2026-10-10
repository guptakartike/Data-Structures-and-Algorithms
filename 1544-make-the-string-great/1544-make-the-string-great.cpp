class Solution {
public:
    string makeGood(string s) {
        stack<int>st;
        for(int i=0; i<s.size(); i++){
            if(st.empty()) st.push(s[i]);
            else{
                if(s[i]==st.top()+32) st.pop();
                else if(s[i]==st.top()-32) st.pop();
                else st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            char ch = st.top();
            ans.insert(ans.begin(),ch);
            st.pop();
        }
        return ans;
    }
};