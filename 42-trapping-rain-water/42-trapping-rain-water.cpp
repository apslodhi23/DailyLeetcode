class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        vector<int>l(n),r(n);
        l[0]=arr[0];
        for(int i=1;i<n;i++){
            l[i]=max(l[i-1],arr[i]);
        }
        r[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            r[i]=max(r[i+1],arr[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int k=min(l[i],r[i]);
            ans+=(abs(k-arr[i]));
        }
        return ans;
    }
};