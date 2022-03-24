class Solution {
public:
    int numRescueBoats(vector<int>& arr, int k) {
        int i=0,j=arr.size()-1;
        int ans=0;
        sort(arr.begin(),arr.end());
        while(i<=j){
            if(arr[j]==k){
                ans++;
                j--;
            }else if(arr[i]+arr[j]<=k){
                i++;
                j--;
                ans++;
            }else if(arr[j]+arr[i]>k){
                j--;
                ans++;
            }
        }
        return ans;
    }
};