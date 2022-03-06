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
    bool fun(TreeNode*root,long long minn,long long maxx){
        if(root==NULL){
            return true;
        }
        if(root->val>minn and root->val<maxx){
            return (fun(root->left,minn,root->val) and fun(root->right,root->val,maxx));
            
        }
        return false;
    }
    bool isValidBST(TreeNode* root)
    {
        long long minn=LLONG_MIN;
        long long maxx=LLONG_MAX;
        return fun(root,minn,maxx);
    }
};