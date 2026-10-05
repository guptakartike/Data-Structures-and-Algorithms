class Solution {
public:

    int mostWordsFound(vector<string>& sentences) {
        string s;
        int maxi=0;
        for(int i=0; i<sentences.size(); i++){
            string line = sentences[i];
            int count=1;
            for(int i=0; i<line.size(); i++){
                if(line[i]==' ') count++;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};