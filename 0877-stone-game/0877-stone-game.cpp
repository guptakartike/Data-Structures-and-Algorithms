class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int i=0, j=piles.size()-1;
        int alice=0, bob=0;
        int maxi=0;
        while(i<j){
            //alice
            maxi=max(piles[i],piles[j]);
            if(maxi==piles[i]) i++;
            else j--;
            alice+=maxi;

            //bob
            maxi=max(piles[i],piles[j]);
            if(maxi==piles[i]) i++;
            else j--;
            bob+=maxi;
        }
        if(alice>bob) return true;
        return true;
    }
};