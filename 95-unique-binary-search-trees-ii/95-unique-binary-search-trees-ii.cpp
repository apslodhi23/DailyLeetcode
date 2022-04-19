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
    vector<TreeNode*> fun(int l,int r){
        if(l>r){
            return {NULL};
        }
        vector<TreeNode*>ans;
        for(int i=l;i<=r;i++){
            vector<TreeNode*>left=fun(l,i-1);
            vector<TreeNode*>right=fun(i+1,r);
            for(auto ll:left){
                for(auto rr:right){
                    TreeNode*root=new TreeNode(i);
                    root->left=ll;
                    root->right=rr;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
       return fun(1,n);
    }
};