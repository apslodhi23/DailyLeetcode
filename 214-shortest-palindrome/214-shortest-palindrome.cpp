class Solution {
public:
    string shortestPalindrome(string s) {
        string ss=s;
        reverse(ss.begin(),ss.end());
        string l=s+"#"+ss;
        int n=l.length();
        vector<int>arr(n,0);
        for(int i=1;i<n;i++){
            int j=arr[i-1];
            while(j>0 and l[i]!=l[j] ){
                j=arr[j-1];
            }
            arr[i]= (j+=(l[i]==l[j]));
        }
        return ss.substr(0,s.length()-arr[n-1])+s;
    }
};