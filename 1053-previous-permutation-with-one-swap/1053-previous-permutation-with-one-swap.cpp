class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n=arr.size();
        int i=n-2;
        while(i>=0 ){
            if(arr[i+1]<arr[i]){
                break;
            }
            i--;
        }
        cout<<i<<endl;
        if(i<0){
            return arr;
        }
        int kk=INT_MIN;
        int c=-1;
        int in=i;
        for(i=i+1;i<n;i++){
            if(arr[i]<arr[in] and kk<arr[i] ){
                kk=max(kk,arr[i]);
                c=i;
            }
        }
        swap(arr[in],arr[c]);
        return arr;
    }
};