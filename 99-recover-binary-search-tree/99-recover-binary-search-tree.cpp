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
    vector<int>arr;
    void fun1(TreeNode*root){
        if(root==NULL){
            return;
        }
        fun1(root->left);
        arr.push_back(root->val);
        fun1(root->right);
    }
    int i=0;
    void fun(TreeNode*root){
        if(root==NULL){
            return;
        }
        fun(root->left);
        root->val=arr[i];
        i++;
        fun(root->right);
    }
    void recoverTree(TreeNode* root) {
        arr.clear();
        fun1(root);
        sort(arr.begin(),arr.end());
        i=0;
        fun(root);
    }
};