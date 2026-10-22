class Solution {
public:
    void solve(string ds, vector<string>& ans, int open,
               int close, int n) {
        if (open == n && close == n) {
            ans.push_back(ds);
            return;
        }
        if (open < n)
            solve(ds + '(', ans, open + 1, close, n);
        if (close < open)
            solve(ds + ')', ans, open, close + 1, n);
    }

    vector<string> generateParenthesis(int n) {

        string ds;
        vector<string> ans;
        solve(ds, ans, 0, 0, n);
        return ans;
    }
};