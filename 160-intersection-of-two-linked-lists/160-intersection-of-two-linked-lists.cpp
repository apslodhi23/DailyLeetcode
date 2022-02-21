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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*heada=headA,*headb=headB;
        while(headA!=headB){
            if(headA==NULL){
                headA=headb;
            }else{
                headA=headA->next;
            }
            if(headB==NULL){
                headB=heada;
            }else{
                headB=headB->next;
            }
        }
        return headA;
    }
};