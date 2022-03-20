class Solution {
public:
    int minDominoRotations(vector<int>& arr, vector<int>& brr) {
        vector<int>a(7),b(7),c(7);
        
        for(int i=0;i<arr.size();i++){
            a[arr[i]]++;
            b[brr[i]]++;
            if(arr[i]==brr[i]){
                c[arr[i]]++;
            }
        }
        for(int i=1;i<7;i++){
            if(a[i]+b[i]-c[i]==arr.size()){
                return arr.size()-max(a[i],b[i]);
            }
        }
        return -1;
    }
};