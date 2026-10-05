class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string t1 = "";
        string t2 = "";
        int i=0;
        while(i < word1.size()){
            t1=t1+word1[i];
            i++;
        }
        i=0;
        while(i < word2.size()){
            t2=t2+word2[i];
            i++;
        }
        if(t1==t2) return true;
        return false;
    }
};