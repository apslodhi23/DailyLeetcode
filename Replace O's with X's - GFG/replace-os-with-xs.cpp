// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public: 

    void fun(vector<vector<char>>&arr,int i,int j,int n,int m){
        if(i<0 or i>=n or j<0 or  j>=m or arr[i][j]!='O'){
            return;
        }
        arr[i][j]='2';
        fun(arr,i+1,j,n,m);
        fun(arr,i-1,j,n,m);
        fun(arr,i,j+1,n,m);
        fun(arr,i,j-1,n,m);
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> arr)
    {
        // code here
        for(int i=0;i<n;i++){
            if(arr[i][0]=='O')
                fun(arr,i,0,n,m);
            if(arr[i][m-1]=='O')
                fun(arr,i,m-1,n,m);
        }
        for(int i=0;i<m;i++){
            if(arr[0][i]=='O')
                fun(arr,0,i,n,m);
            if(arr[n-1][i]=='O')
                fun(arr,n-1,i,n,m);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='2'){
                    arr[i][j]='O';
                }else if(arr[i][j]=='O'){
                    arr[i][j]='X';
                }
            }
        }
        return arr;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends