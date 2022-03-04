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
    bool fun(TreeNode*root,int s,int ss){
        if(root==NULL){
            return false;
        }
        if(root->left==NULL and root->right==NULL){
            ss+=root->val;
            if(s==ss){
                return true;
            }
            return false;
        }
        ss+=root->val;
        return (fun(root->left,s,ss) or fun(root->right,s,ss));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int s=0;
        return  fun(root,targetSum,0);
    }
};