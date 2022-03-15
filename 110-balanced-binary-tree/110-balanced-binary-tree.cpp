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
    int fun(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        return 1+max(fun(root->left),fun(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int l=fun(root->left);
        int r=fun(root->right);
        // return l==r and
        if(abs(l-r)>1){
            return false;
        }
        return isBalanced(root->left) and isBalanced(root->right);
    }
};