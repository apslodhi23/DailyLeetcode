class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int>m;
        for(int i=1;i<=n;i++){
            int k=i;
            int s=0;
            while(k!=0){
                s+=k%10;
                k=k/10;
            }
            m[s]++;
        }
        int ans=0;
        int maax=0;
        for(auto x:m){
            maax=max(x.second,maax);
        }
        for(auto x:m){
            if(x.second==maax){
                ans++;
            }
        }
        return ans;
    }
};