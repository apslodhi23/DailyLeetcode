class Solution {
public:
    vector<int>ans;
    void fun(int n,int k,int curr){
        if(n==0){
            ans.push_back(curr);
            return;
        }
        for(int i=0;i<10;i++){
            if(i==0 and curr==0){
                continue;
            }
            if(i!=0 and curr==0){
                fun(n-1,k,i);
            }else if(abs(curr%10 -i)==k){
                fun(n-1,k,curr*10+i);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        fun(n,k,0);
        return ans;
    }
};