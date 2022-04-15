class Solution {
public:
    string longestPalindrome(string s) {
        int i=1;
        int n=s.length();
        int ans=0;
        int ind=-1;
        if(n<=1){
            return s;
        }
        while(i<n){
            int j=i-1,k=i+1;
            while(j>=0 and k<n and s[j]==s[k]){
                j--;
                k++;
            }
            j++;
            k--;
            if(s[j]==s[k]){
                // cout<<j<<endl;
                if(ans<k-j +1){
                    ans=k-j +1;
                    ind=j;
                }
            }
            j=i-1,k=i;
            while(j>=0 and k<n and s[j]==s[k]){
                j--;
                k++;
            }
            j++;
            k--;
            if(s[j]==s[k]){
                if(ans<k-j+1){
                    ans=k-j+1;
                    ind=j;
                }
            }
            i++;
        }
        return s.substr(ind,ans);
        
    }
};