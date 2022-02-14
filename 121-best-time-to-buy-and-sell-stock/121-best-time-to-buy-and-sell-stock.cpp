class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        int c=arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i]<c){
                ans=max(ans,c-arr[i]);
            }
            c=max(c,arr[i]);
        }
        return ans;
    }
};