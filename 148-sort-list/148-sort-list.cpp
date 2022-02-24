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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        auto x=head;
        while(x!=NULL){
            v.push_back(x->val);
            x=x->next;
        }
        sort(v.begin(),v.end());
        x=head;
        int i=0;
        while(x!=NULL){
            x->val=v[i];
            i++;
            x=x->next;
        }
        return head;
    }
};