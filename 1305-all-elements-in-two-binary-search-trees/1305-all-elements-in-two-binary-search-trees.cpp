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
    
    void fun(TreeNode*root,vector<int>&ans){
        if(root==NULL)
            return;
        fun(root->left,ans);
        ans.push_back(root->val);
        fun(root->right,ans);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans1,ans2,ans;
        // fun(ans,root1,root2)
        fun(root1,ans1);
        fun(root2,ans2);
        int i=0,j=0;
        // cout<<ans1.size()<<" "<<ans2.size()<<endl;
        while(i<ans1.size() and j<ans2.size()){
            if(ans1[i]<ans2[j]){
                ans.push_back(ans1[i]);
                i++;
            }else{
                ans.push_back(ans2[j]);
                j++;
            }
        }
        while(i<ans1.size()){
            ans.push_back(ans1[i]);
            i++;
        }
        while(j<ans2.size()){
            ans.push_back(ans2[j]);
            j++;
        }
        return ans;
    }
};