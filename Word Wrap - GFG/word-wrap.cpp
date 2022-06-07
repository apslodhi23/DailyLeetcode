// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public: 
    int dp[501][2000];
    int fun(vector<int>&arr,int rem,int k,int i,int n){
        if(i==n){
            return 0;
        }
        if(dp[i][rem]!=-1){
            return dp[i][rem];
        }
        int ans=0;
        if(arr[i]>rem){
            ans=(rem+1)*(rem+1)+fun(arr,k-arr[i]-1,k,i+1,n);
        }else{
            int c1=(rem+1)*(rem+1)+fun(arr,k-arr[i]-1,k,i+1,n);
            int c2=fun(arr,rem-arr[i]-1,k,i+1,n);
            ans=min(c1,c2);
        }
        return dp[i][rem]=ans;
            
        
    }
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        memset(dp,-1,sizeof(dp));
        return fun(nums,k,k,0,nums.size());
    } 
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}  // } Driver Code Ends