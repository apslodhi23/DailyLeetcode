class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i] >0){
                ans+=(arr[i+1]-arr[i]);
            }
        }
        return ans;
    }
};