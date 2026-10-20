class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        map<int,vector<int>>mpp;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                mpp[i+j].push_back(mat[i][j]);
            }
        }

        for(auto &it:mpp){
            if(it.first%2==0)
            reverse(it.second.begin(),it.second.end());
        }
        vector<int>ans;
        for(auto &it:mpp ){
            for(auto num:it.second)
            ans.push_back(num);
        }
        return ans;
    }
};