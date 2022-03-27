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
    int mod=1e9+7;
    long long tsum=0,ans=0;
    long long fun(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        long long sum=fun(root->left)+fun(root->right)+root->val;
        ans=max(ans,(tsum-sum)*sum);
        return sum;
    }
    int maxProduct(TreeNode* root) {
        tsum=fun(root);
        fun(root);
        return ans%mod;
    }
};