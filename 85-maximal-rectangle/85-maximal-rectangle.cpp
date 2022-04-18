class Solution {
public:
    int fun(vector<int>dp,int n){
        vector<int>l(n,0),r(n,0);
        stack<int>s;
        for(int i=0;i<n;i++){
            while(s.empty()==false and dp[s.top()]>=dp[i]){
                s.pop();
            }
            if(s.empty()==true){
                l[i]=-1;
            }
            else{
                l[i]=s.top();
            }
            s.push(i);
        }
        while(s.empty()==false){
            s.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(s.empty()==false and dp[s.top()]>=dp[i]){
                s.pop();
            }
            if(s.empty()==true){
                r[i]=n;
            }
            else{
                r[i]=s.top();
            }
            s.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int ll=l[i]+1;
            int rr=r[i]-1;
            ans=max((rr-ll+1)*dp[i],ans);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& arr) {
        int n= arr.size();
        int m=arr[0].size();
        vector<int>dp(m,0);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='1'){
                    dp[j]+=1;
                }else{
                    dp[j]=0;
                }
            }
            int an=fun(dp,m);
            ans=max(ans,an);
        }
        return ans;
    }
};