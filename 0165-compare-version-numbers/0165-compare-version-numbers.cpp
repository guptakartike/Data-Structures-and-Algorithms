class Solution {
public:
    vector<string>getTokens(string s){
        string token = "";
        stringstream ss(s);
        vector<string>tokens;

        while(getline(ss,token,'.')){
            tokens.push_back(token);
        }
        return tokens;
    }
    int compareVersion(string version1, string version2) {
        vector<string>v1 = getTokens(version1);
        vector<string>v2 = getTokens(version2);
        int m = v1.size();
        int n = v2.size();
        int i=0;

        while(i<n || i<m){
            int a = i<m ? stoi(v1[i]):0;
            int b = i<n ? stoi(v2[i]):0;

            if(a<b) return -1;
            else if(a>b) return 1;
            else i++;
        }
        return 0;

    }
};