class Solution {
public:
    int findUnsortedSubarray(vector<int>& arr) {
        int n=arr.size();
        int e=-2,b=-1;
        int mx=INT_MIN;
        int mn=INT_MAX;
        int i,j;
        for(i=0;i<n;i++){
            mx=max(mx,arr[i]);
            if(arr[i]<mx){
                e=i;
            }
        }
        for(i=n-1;i>=0;i--){
            mn=min(mn,arr[i]);
            if(arr[i]>mn){
                b=i;
            }
        }
        return e-b+1;
    }
};