/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void fun(TreeNode*o,TreeNode*root,TreeNode*tar,TreeNode*&ans){
        if(o==NULL){
            return;
        }
        if(o==tar){
            ans=root;
        }
        fun(o->left,root->left,tar,ans);
        fun(o->right,root->right,tar,ans);
    }
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* root, TreeNode* target) {
        TreeNode*ans=NULL;
        fun(o,root,target,ans);
        return ans;
    }
};