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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        int ans=1;
        while(!q.empty()){
            int k=q.size();
            long long  minn=q.front().second;
            long long l,r;
            for(int i=0;i<k;i++){
                auto x=q.front();
                q.pop();
                long long id=x.second-minn;
                auto node=x.first;
                if(i==0){
                    l=id;
                }
                if(i==k-1){
                    r=id;
                }
                if(node->left){
                    q.push({node->left,2*id+1});
                }
                if(node->right){
                    q.push({node->right,2*id+2});
                }
            }
            k=r-l+1;
            if(ans<k){
                ans=k;
            }
        }
        return ans;
    }
};