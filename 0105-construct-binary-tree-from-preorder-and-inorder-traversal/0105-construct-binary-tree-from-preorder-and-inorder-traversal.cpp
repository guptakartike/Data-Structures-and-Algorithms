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
    int find(vector<int>&inorder,int target, int start, int end){
        for(int i=start; i<=end; i++){
            if(inorder[i]==target) return i;
        }
        return -1;
    }

    TreeNode* tree(vector<int>& preorder, vector<int>& inorder, int inStart, int inEnd, int index){
        if(inStart>inEnd) return NULL;
        TreeNode *root = new TreeNode(preorder[index]);
        int pos = find(inorder,preorder[index],inStart,inEnd);
        root->left=tree(preorder,inorder,inStart, pos-1, index+1);
        root->right=tree(preorder,inorder,pos+1, inEnd, index+(pos-inStart+1));
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index = 0;
        int inStart = 0, inEnd = preorder.size()-1;
        return tree(preorder,inorder,inStart, inEnd, index);

    }
};