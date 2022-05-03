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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>>ans;
        queue<TreeNode*>pq;
        pq.push(root);
        while(pq.empty()==false){
            int tf=pq.size();
            // pq.pop();
            vector<int>v;
            while(tf--){
               auto t=pq.front();
                pq.pop();
                v.push_back(t->val);
                if(t->left){
                    pq.push(t->left);
                }
                if(t->right){
                    pq.push(t->right);
                }
            }
            ans.push_back(v);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};