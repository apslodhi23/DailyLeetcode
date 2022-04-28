class Solution {
public:
    vector<int> minOperations(string arr) {
        int n=arr.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=0;j<n;j++){
                if(i!=j){
                    if(arr[j]=='1'){
                        k+=(abs(i-j));
                    }
                }
            }
            ans[i]=k;
        }
        return ans;
    }
};