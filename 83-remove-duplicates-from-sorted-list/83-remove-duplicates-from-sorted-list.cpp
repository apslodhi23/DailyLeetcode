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
        ListNode*temp=head,*nextt=head;
        if(head==NULL or head->next==NULL){
            return head;
        }
        nextt=head->next;
        while(nextt!=NULL){
            if(temp->val==nextt->val){
                nextt=nextt->next;
            }else{
                temp->next=nextt;
                temp=temp->next;
                nextt=nextt->next;
            }
        }
        temp->next=NULL;
        return head;
    }
};