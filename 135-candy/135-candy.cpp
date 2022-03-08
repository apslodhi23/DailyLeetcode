class Solution {
public:
    int candy(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        if(n==1){
            return 1;
        }
        vector<int>vv(n,1);
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                vv[i]=vv[i-1]+1;
            }
        }
        for(int i=n-1;i>0;i--){
            if(arr[i-1]>arr[i]){
                vv[i-1]=max(vv[i]+1,vv[i-1]);
            }
        }
        for(int i=0;i<n;i++){
            ans+=vv[i];
        }
        return ans;
    }
};