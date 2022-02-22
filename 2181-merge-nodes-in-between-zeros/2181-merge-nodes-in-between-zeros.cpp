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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*dum=new ListNode(0);
        ListNode*temp=dum;
        int s=0;
        ListNode*h1=head;
        while(head!=NULL){
            if(head->val==0){
                if(s!=0){
                    temp->next=new ListNode(s);
                    temp=temp->next;
                    s=0;
                }
            }
            else{
                s+=head->val;
            }
            head=head->next;
        }
        return dum->next;
    }
};