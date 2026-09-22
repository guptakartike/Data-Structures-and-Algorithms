class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int i=0;
        int count=0;
        while(i<s.size()){
            if(s[i]=='('){
                st.push(s[i]);
               
            }
            else{
                if(st.empty()) count++;
                else st.pop();
            }
            i++;
        }
        return count+st.size();
    }
};