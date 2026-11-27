/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;
        int ans = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            int size = q.size();
            long long mini = q.front().second;
            long long first, last;
            for (int i = 0; i < size; i++) {
                long long curr_idx = q.front().second - mini;
                TreeNode* Node = q.front().first;
                q.pop();
                if (i == 0)
                    first = curr_idx;
                if (i == size - 1)
                    last = curr_idx;
                if (Node->left)
                    q.push({Node->left, curr_idx * 2 + 1});
                if (Node->right)
                    q.push({Node->right, curr_idx * 2 + 2});
            }
            ans = max(ans, (int)(last - first + 1));
        }
        return ans;
    }
};