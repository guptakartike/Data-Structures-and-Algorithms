/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isOddElements(queue<TreeNode*>q, bool isOddLevel){
        int prev;
        if(isOddLevel) prev=INT_MIN;
        else prev=INT_MAX;

        while(!q.empty()){
            int val = q.front()->val;
            q.pop();

            if(isOddLevel){
                if(val%2 ==0 || val <=prev) return false;
            }
            else if(val%2 !=0 || val >= prev) return false;
            prev=val;
        }
        return true;

    }

    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>ans;
        if(!root) return false;
        q.push(root);

        bool isOddLevel = true;

        while(!q.empty()){
            int n = q.size();
            if(!isOddElements(q,isOddLevel)) return false;
            // if(!isOddLevel && isOddElements(q,isOddLevel)) return false;
            for(int i=0; i<n; i++){
                TreeNode *curr = q.front();
                q.pop();

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);

            }
            isOddLevel = !isOddLevel;
        }
        return true;
    }
};