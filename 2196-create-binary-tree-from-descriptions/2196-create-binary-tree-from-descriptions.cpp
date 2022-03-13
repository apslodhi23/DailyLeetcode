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
    TreeNode* createBinaryTree(vector<vector<int>>& arr) {
        unordered_map<int,TreeNode*>ma;
        unordered_map<int,bool>vis;
        for(auto x:arr){
            if(ma.count(x[0])==0){
                TreeNode* kk= new TreeNode(x[0]);
                ma[x[0]]=kk;
            }
            if(ma.count(x[1])==0){
                TreeNode* kk=new TreeNode(x[1]);
                ma[x[1]]=kk;
            }
            if(x[2]==1){
                ma[x[0]]->left=ma[x[1]];
            }else if(x[2]==0){
                ma[x[0]]->right=ma[x[1]];
            }
            vis[x[1]]=true;
        }
        
        TreeNode*ans=NULL;
        for(auto x:arr){
            if(vis[x[0]]==false){
                ans=ma[x[0]];
                break;
            }
        }
        return ans;
    }
};