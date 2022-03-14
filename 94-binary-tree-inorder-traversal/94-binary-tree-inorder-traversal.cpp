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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode*r=root;
        while(r!=NULL){
            if(r->left==NULL){
                ans.push_back(r->val);
                r=r->right;
            }else{
                TreeNode*t=r->left;
                while(t->right and t->right!=r){
                    t=t->right;
                }
                if(t->right==NULL){
                    t->right=r;
                    r=r->left;
                }else{
                    t->right=NULL;
                    ans.push_back(r->val);
                    r=r->right;
                }
            }
        }
        return ans;
    }
};