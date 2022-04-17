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
    void inorder(TreeNode*root,vector<TreeNode*>&v){
        if(root==NULL){
            return;
        }
        inorder(root->left,v);
        v.push_back(root);
        inorder(root->right,v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*>v;
        inorder(root,v);
        TreeNode*curr=v[0];
        v[0]->left=NULL;
        v[0]->right=NULL;
        for(int i=1;i<v.size();i++){
            curr->right=v[i];
            v[i]->left=NULL;
            v[i]->right=NULL;
            curr=curr->right;
        }
        return v[0];
    }
};