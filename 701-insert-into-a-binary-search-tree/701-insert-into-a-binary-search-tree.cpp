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
   void fun(TreeNode*root,int val){
        if(root==NULL){
            TreeNode* r=new TreeNode(val);
            root=r;
            return;
        }
        if(root->val>val){
            if(root->left==NULL){
                TreeNode* l=new TreeNode(val);
                root->left=l;
                return ;
            }else{
                fun(root->left,val);
            }
        }else{
            
            if(root->right==NULL){
                TreeNode* l=new TreeNode(val);
                root->right=l;
                return;
            }else{
                fun(root->right,val);
            }
        }
        return;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            TreeNode* r=new TreeNode(val);
            return r;
        }
        fun(root,val);
        return root;
    }
};