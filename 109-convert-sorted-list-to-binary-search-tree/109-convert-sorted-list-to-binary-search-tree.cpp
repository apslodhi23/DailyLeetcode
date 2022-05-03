/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            TreeNode* t=new TreeNode(head->val);
            return t;
        }
        ListNode*s=head,*f=head->next;
        while(f!=NULL and f->next!=NULL and f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        TreeNode*root=new TreeNode(s->next->val);
        ListNode*nn=s->next->next;
        s->next=NULL;
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(nn);
        return root;
    }
};