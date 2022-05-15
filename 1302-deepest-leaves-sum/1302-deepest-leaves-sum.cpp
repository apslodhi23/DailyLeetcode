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
    int deepestLeavesSum(TreeNode* root) {
        vector<int>v;
        queue<TreeNode*>pq;
        pq.push(root);
        while(pq.empty()==false){
            int k=pq.size();
            vector<int>vn;
            while(k--){
                auto t=pq.front();
                pq.pop();
                vn.push_back(t->val);
                if(t->left!=NULL){
                    pq.push(t->left);
                }
                if(t->right!=NULL){
                    pq.push(t->right);
                }
            }
            v=vn;
        }
        long long ans=0;
        for(auto x:v){
            ans+=x;
        }
        return (int)ans;
    }
};