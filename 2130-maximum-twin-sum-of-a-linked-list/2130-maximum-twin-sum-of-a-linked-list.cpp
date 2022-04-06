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
    int pairSum(ListNode* head) {
        stack<int>s;
        ListNode*sl=head,*fast=head;
        int ans=0;
        while(fast!=NULL and fast->next!=NULL )
        {
            s.push(sl->val);
            sl=sl->next;
            fast=fast->next->next;
        }
        cout<<s.size()<<endl;
        while(sl!=NULL){
            int k=s.top()+sl->val;
            sl=sl->next;
            s.pop();
            ans=max(ans,k);
        }
        return ans;
    }
};