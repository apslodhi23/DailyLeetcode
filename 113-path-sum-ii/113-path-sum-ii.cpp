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
    vector<vector<int>>ans;
    void fun(TreeNode*root,int tar,vector<int>v){
        if(root==NULL){
            return;
        }
        if(root->left==NULL and root->right==NULL){
            v.push_back(root->val);
            if(tar-root->val==0){
                ans.push_back(v);
                return;
            }
        }
        v.push_back(root->val);
        fun(root->left,tar-root->val,v);
        fun(root->right,tar-root->val,v);
    }
    vector<vector<int>> pathSum(TreeNode* root, int tar) {
        fun(root,tar,{});
        return ans;
    }
};