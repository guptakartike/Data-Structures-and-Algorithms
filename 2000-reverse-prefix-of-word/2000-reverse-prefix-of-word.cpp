class Solution {
public:
    void reverse(string &word, int i, int j){
        // int i=0, j=word.size()-1;
        while(i<j){
            swap(word[i],word[j]);
            i++,j--;
        }
    }
    string reversePrefix(string word, char ch) {
        int i=0;
        while(i<word.size()){
            if(word[i]==ch) break;
            i++;
        }

        if(i==word.size()) return word;
        reverse(word,0,i);
        return word;
    }
};