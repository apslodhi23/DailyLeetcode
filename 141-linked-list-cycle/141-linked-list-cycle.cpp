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
    bool hasCycle(ListNode *head) {
        ListNode*s=head,*f=head;
        do{
            if(f==NULL or f->next==NULL){
                return false;
            }
            s=s->next;
            f=f->next->next;
        }while(s!=f);
        return true;
    }
};