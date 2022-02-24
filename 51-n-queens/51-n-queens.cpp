class Solution {
public:
//     int ans=0;
//     bool safe(int row,int col,vector<vector<int>>&b,int n){
//     for(int i=0;i<col;i++){
//         if(b[row][i]==1){
//             return false;
//         }
//     }
//     int i=row ,j=col;
//     while(i>=0 and j>=0){
//         if(b[i][j]==1){
//             return false;
//         }
//         i--;
//         j--;
//     }
//      i=row,j=col;
//     while(i<n and j>=0){
//         if(b[i][j]==1){
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }
    // bool fun(vector<string>&arr,int c,int n){
    //     if(c==n){
    //         ans++;
    //         return true;
    //     }
    //      for(int i=0;i<n;i++){
    //         if(safe(i,c,arr,n)==true){
    //             arr[i][c]=1;
    //             fun(arr,c+1,n);
    //             arr[i][c]=0;
    //         }
    //     }
    //     return false;
    // }
    vector<vector<string>>ans;
    bool safe(vector<string>&arr,int r,int c,int n){
        for(int i=0;i<c;i++){
            if(arr[r][i]=='Q'){
                return false;
            }
        }
        int i=r,j=c;
        while(i>=0 and j>=0){
            if(arr[i][j]=='Q'){
                return false;
            }
            i--;
            j--;
        }
        i=r,j=c;
        while(i<n and j>=0){
            if(arr[i][j]=='Q'){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void fun(vector<string>arr,int c,int n){
        if(c==n){
            // cout<<1<<endl;
            ans.push_back(arr);
            return;
        }
        for(int i=0;i<n;i++){
            if(safe(arr,i,c,n)==true){
                arr[i][c]='Q';
                fun(arr,c+1,n);
                arr[i][c]='.';
            }
        }
        // return;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>arr;
        string s="";
        for(int i=0;i<n;i++){
            s+=".";
        }
        for(int i=0;i<n;i++){
            arr.push_back(s);
        }
        // cout<<arr.size()<<endl;
        fun(arr,0,n);
        return ans;
    }
};