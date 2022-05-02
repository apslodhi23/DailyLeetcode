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
    TreeNode*fun(vector<int>&in ,vector<int>&pos,int i,int j,int &c){
        if(j<i){
            return NULL;
        }
        int k=m[pos[c]];
        TreeNode *root=new TreeNode(in[k]);
        c--;
        root->right=fun(in ,pos,k+1,j,c);
        root->left=fun(in,pos,i,k-1,c);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& pos) {
        m.clear();
        for(int i=0;i<pos.size();i++){
            m[in[i]]=i;
        }
        int c=pos.size()-1;
        return fun(in,pos,0,pos.size()-1,c);
    }
};