class Solution {
public:
    int numberOfArrays(vector<int>& arr, int lower, int upper) {
        long long  a=2;
        long long mn=2,mx=2;
        
        for(int i=0;i<arr.size();i++){
            long long c=arr[i]+a;
            mn=min(mn,c);
            mx=max(mx,c);
            a=c;
        }
        long long c= (upper-lower +1)-(mx-mn);
        return (c<0)?0:c;
    }
};