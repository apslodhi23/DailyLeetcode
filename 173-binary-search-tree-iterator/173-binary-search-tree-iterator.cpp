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
class BSTIterator {
public:
    vector<int>arr;
    void fun(TreeNode*root){
        if(root==NULL){
            return ;
        }
        fun(root->left);
        arr.push_back(root->val);
        fun(root->right);
    }
    int i=0;
    BSTIterator(TreeNode* root) {
        i=0;
        arr.clear();
        fun(root);
    }
    
    int next() {
        if(i<arr.size()){
            i++;
            return arr[i-1];
            
        }
        return -1;
    }
    
    bool hasNext() {
        return i<arr.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */