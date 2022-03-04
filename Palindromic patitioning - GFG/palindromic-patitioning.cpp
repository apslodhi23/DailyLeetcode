// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int ans=INT_MAX;
    map<int,int>m;
    int fun(string s,int i,int k){
        if(i==s.length()){
            return 0;
        }
        if(m.find(i)!=m.end()){
            return m[i];
        }
        int x=INT_MAX;
        for(int j=i;j<s.length();j++){
            if(palain(s,i,j)==true){
                // k++;
                x=min(x,1+fun(s,j+1,k+1));
                // k--;
            }
        }
        return m[i]=x;
    }
    bool palain(string s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    int palindromicPartition(string str)
    {
        // code here
        return fun(str,0,0)-1;
        // return ans-1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends