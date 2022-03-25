class Solution {
public:
    int maxSatisfied(vector<int>& arr, vector<int>& brr, int m) {
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(brr[i]==0){
                ans+=arr[i];
            }
        }
        int mx=0;
        int k=0;
        for(int i=0;i<m;i++){
            if(brr[i]==1){
                mx+=arr[i];
            }
        }
        int c=0;
        k=max(k,mx);
        for(int i= m;i<n;i++){
            if(brr[i]==1){
                mx+=arr[i];
            }
            if(brr[c]==1){
                mx-=arr[c];
            }
            k=max(k,mx);
            c++;
        }
        return ans+k;
    }
};