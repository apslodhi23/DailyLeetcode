class Solution {
public:
    void fun(vector<vector<int>>&arr,int l,int r){
        int n=arr.size();
        int m=arr[0].size();
        while(l<r){
            int lr=l/m, lc=l%m;
            int rr=r/m,rc=r%m;
            swap(arr[lr][lc],arr[rr][rc]);
            l++;
                r--;
        }
        
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& arr, int k) {
        int n=arr.size();
        int m=arr[0].size();
        k=k%(n*m);
        if(k==0){
            return arr;
        }
        fun(arr,0,n*m-1);
        fun(arr,0,k-1);
        fun(arr,k,n*m-1);
        return arr;
    }
};