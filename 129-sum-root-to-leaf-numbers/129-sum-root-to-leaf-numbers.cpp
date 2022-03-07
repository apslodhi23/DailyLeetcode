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
    int sum=0;
    int mod=1e9+7;
    void fun(TreeNode*root,long long  s){
        if(root==NULL){
            return;
        }
        if(!root->left and !root->right){
            s=s*10+root->val;
            sum+=(s);
        }
        s=(s*10+root->val);
        fun(root->left,s);
        fun(root->right,s);
    }
    int sumNumbers(TreeNode* root) {
        long long  s=0;
        sum=0;
        fun(root,s);
        return sum;
    }
};