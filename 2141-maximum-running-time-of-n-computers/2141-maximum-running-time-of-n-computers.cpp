class Solution {
public:
    bool fun(vector<int>&arr,int n,long long m){
        long long s=0;
        for(auto x:arr){
            if(x>=m){
                s+=m;
            }else{
                s+=x;
            }
        }
        return (s/n)>=m;
    }
    long long maxRunTime(int n, vector<int>& arr) {
        long long sum=0;
        for(auto x:arr){
            sum+=x;
        }
        sort(arr.rbegin(),arr.rend());
        if(n==1){
            return sum;
        }
        sum=sum/n;
        long long i=arr[n-1],j=sum;
        long long ans=0;
        while(i<=j){
            long long m=i+(j-i)/2;
            if(fun(arr,n,m)){
                ans=max(ans,m);
                i=m+1;
            }else{
                j=m-1;
            }
        }
        return ans;
    }
};