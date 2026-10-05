class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>hash(26,0);
        int i = 0;
        while(i<sentence.size()){
            char letter = sentence[i];
            hash[letter-'a'] = 1;
            i++;
        }
        for(int i = 0; i<26; i++){
            if(hash[i]==0) return false;
        }
        return true;
    }
};