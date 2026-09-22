class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='#'){
                if(!st1.empty()) st1.pop();
            } 
            else st1.push(s[i]);
        }
        stack<char>st2;
        for(int i=0; i<t.size(); i++){
            if(t[i]=='#'){
                if(!st2.empty()) st2.pop();
            } 
            else st2.push(t[i]);
        }
        if(st1==st2) return true;
        else return false;
    }
};