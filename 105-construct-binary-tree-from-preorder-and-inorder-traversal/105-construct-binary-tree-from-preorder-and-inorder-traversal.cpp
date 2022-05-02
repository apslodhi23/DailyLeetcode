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
    map<int,int>m;
    TreeNode*fun(vector<int>pre,vector<int>in,int &c,int i,int j){
        if(j<i){
            return NULL;
        }
        int k=m[pre[c]];
        TreeNode*root=new TreeNode(in[k]);
        c++;
        root->left=fun(pre,in,c,i,k-1);
        root->right=fun(pre,in,c,k+1,j);
        return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int c=0;
        m.clear();
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        return fun(preorder,inorder,c,0,preorder.size()-1);
    }
};