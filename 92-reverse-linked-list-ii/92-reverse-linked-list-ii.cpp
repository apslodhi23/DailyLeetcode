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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode*d=new ListNode(0);
        d->next=head;
        auto prev=d;
        for(int i=1;i<m;i++){
            prev=prev->next;
        }
        auto t=prev->next;
        for(int i=m;i<n;i++){
            swap(prev->next,t->next->next);
            swap(prev->next,t->next);
        }
        return d->next;
    }
};