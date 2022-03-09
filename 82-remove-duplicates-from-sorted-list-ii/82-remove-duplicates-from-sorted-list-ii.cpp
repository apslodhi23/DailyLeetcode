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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*h1=head,*h2=head;
        if(head==NULL or head->next==NULL){
            return head;
        }
        int c=h1->val;
        h1=head->next;
        if(h1->val!=c){
            head->next=deleteDuplicates(h1);
            return head;
        }else{
            while(h1!=NULL and h1->val==c){
                h1=h1->next;
            }
            return deleteDuplicates(h1);
        }
    }
};