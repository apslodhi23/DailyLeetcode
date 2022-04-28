class Solution {
public:
    vector<int> minOperations(string arr) {
        int n=arr.size();
        vector<int>ans(n);
        int s=arr[0]-'0',k=0;
        for(int i=1;i<n;i++){
            ans[i]+=s+k;
            k=ans[i];
            s+=(arr[i]-'0');
            
        }
        s=arr[n-1]-'0',k=0;
        for(int i=n-2;i>=0;i--){
            ans[i]+=s+k;
            k=s+k;
            s+=(arr[i]-'0');
        }
        return ans;
    }
};