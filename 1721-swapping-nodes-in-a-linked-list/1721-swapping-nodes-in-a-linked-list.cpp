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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int c=0;
        ListNode*temp=head;
        ListNode*h1,*h2;
        while(temp!=NULL){
            c++;
            if(c==k){
                h1=temp;
            }
            temp=temp->next;
        }
        int ck=c-k;
        temp=head;
        while(ck--){
            temp=temp->next;
        }
        swap(temp->val,h1->val);
        return head;
    }
};