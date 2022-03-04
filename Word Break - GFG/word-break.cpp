// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public: 
    map<string,int>m;
    int fun(string s,int i){
        if(i==s.length()){
            return 1;
        }
        int ans=0;
        for(int j=i;j<s.length();j++){
            string ss=s.substr(i,j-i+1);
            if(m[ss]>0){
                if(fun(s,j+1)){
                    ans=1;
                }
            }
        }
        return ans;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        for(auto x:B){
            m[x]++;
        }
        return fun(A,0);
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends