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
    ListNode*fun(ListNode*l1,ListNode*l2){
        if(l1==NULL and l2==NULL){
            return NULL;
        }
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l1->val<l2->val){
            l1->next=fun(l1->next,l2);
            
            return l1;
        }
        else{
            l2->next=fun(l1,l2->next);
            return l2;
        }
        return NULL;
    }
    ListNode* mergeKLists(vector<ListNode*>& l) {
        int n=l.size();
        if(n==0){
            return NULL;
        }
        if(n==1){
            return l[0];
        }
        ListNode*ans=fun(l[0],l[1]);
        for(int i=2;i<n;i++){
            ans=fun(ans,l[i]);
        }
        return ans;
    }
};