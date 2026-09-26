class Solution {
public:
    void findCombinations(int idx,string digits,string ds,vector<string>&ans,string mapping[]){
        if(idx>=digits.size()){
            ans.push_back(ds);
            return;
        }

        int ch = digits[idx]-'0';
        string str = mapping[ch];
        for(int i=0; i<str.size(); i++){
            ds.push_back(str[i]);
            findCombinations(idx+1,digits,ds,ans,mapping);
            ds.pop_back();
            
        }
    }

    vector<string> letterCombinations(string digits) {
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        string ds;
        int idx=0;
        if(digits.size()==0){
            ans.push_back(digits);
            return {};
        }
        findCombinations(idx,digits,ds,ans,mapping);
        return ans;
    }
};