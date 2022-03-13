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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        if(root==NULL){
            return {};
        }
        while(root!=NULL or s.empty()==false){
            if(root!=NULL){
                s.push(root);
                root=root->left;
            }
            else{
                TreeNode*t=s.top()->right;
                if(t==NULL){
                   t=s.top();
                    s.pop();
                    ans.push_back(t->val);
                    while(s.empty()==false  and s.top()->right==t){
                        t=s.top();
                        s.pop();
                        ans.push_back(t->val);
                    }
                }else{
                    root=t;
                }
            }
        }
        return ans;
    }
};