class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n=arr.size();
        for(int i=n-2;i>=0;i--){
            int k=INT_MIN;
            int c=-1;
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    if(k<arr[j]){
                    k=max(k,arr[j]);
                    c=j;
                    }
                }
            }
            if(k!=INT_MIN){
                swap(arr[i],arr[c]);
                return arr;
            }
            
        }
        return arr;
    }
};