/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow=head,*fast=head;
        while(true){
            if(fast==NULL or fast->next==NULL){
                return NULL;
            }
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast and slow!=NULL and fast!=NULL){
                    slow=slow->next;
                    fast=fast->next;
                }
                return fast;
            }
        }
        return NULL;
        
    }
};