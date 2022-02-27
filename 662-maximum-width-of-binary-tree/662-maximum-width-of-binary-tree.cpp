// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     int widthOfBinaryTree(TreeNode* root) {
//         queue<pair<TreeNode*,int>>q;
//         if(root==NULL){
//             return 0;
//         }
//         q.push({root,0});
//         int ans=1;
//         while(q.empty()==false){
//             // int k=q.size();
//             // int f,l;
//             // int minn=q.front().second;
//             // for(int i=0;i<k;i++){
//             //     int c=q.front().second;
//             //     c=c-minn;
//             //     cout<<c<<endl;
//             //     auto node=q.front().first;
//             //     q.pop();
//             //     if(i==0){
//             //         f=c;
//             //     }
//             //     if(i==k-1){
//             //         l=c;
//             //     }
//             //     if(node->left){
//             //         q.push({node->left,(2*c)+1});
//             //     }
//             //     if(node->right){
//             //         q.push({node->right,(2*c)+2});
//             //     }
//             // }
//             // ans=max(ans,(l-f) +1);
//             int k=q.size();
//             int minn=q.front().second;
//             int f,l;
//             for(int i=0;i<k;i++){
//                 int id=q.front().second-minn;
//                 TreeNode*tt=q.front().first;
//                 q.pop();
//                 if(i==0){
//                     f=id;
//                 }
//                 if(i==k-1){
//                     l=id;
//                 }
//                 if(tt->left){
//                     q.push({tt->left,2*id +1});
//                 }
//                 if(tt->right){
//                     q.push({tt->right,2*id +2});
//                 }
//             }
//             ans=max(ans,(l-f)+1);
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        queue<pair<TreeNode*,long long  >>q;
        q.push({root,0});
        long long ans=1;
        while(!q.empty()){
            long long k=q.size();
            long long  minn=q.front().second;
            long long f,l;
            for(int i=0;i<k;i++){
                long long id=q.front().second-minn;
                TreeNode*tt=q.front().first;
                q.pop();
                if(i==0){
                    f=id;
                }
                if(i==k-1){
                    l=id;
                }
                if(tt->left){
                    q.push({tt->left,2*id +1});
                }
                if(tt->right){
                    q.push({tt->right,2*id +2});
                }
            }
            ans=max(ans,(l-f)+1);
        }
        return (int)ans;
    }
};