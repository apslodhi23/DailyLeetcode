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
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=NULL,*cur=head,*nextt=head;
        while(nextt!=NULL){
            nextt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nextt;
        }
        return prev;
    }
};