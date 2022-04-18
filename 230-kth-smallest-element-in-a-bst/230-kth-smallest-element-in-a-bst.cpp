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
    int c=1, ans=0;
    void fun(TreeNode*root,int &k){
        if(root==NULL){
            return ;
        }
        fun(root->left,k);
        cout<<root->val<<" "<<c<<endl;
        if(c==k){
            ans=root->val;
            // return;
        }
        c++;
        fun(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        c=1,ans=0;
        fun(root,k);
        return ans;
    }
};