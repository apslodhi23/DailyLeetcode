class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        unordered_map<char,int>m;
        int i=0;
        int n=s.length();
        if(n==1){
            return 1;
        }
        int j=0;
        int c=0;
        while(i<n){
            if(m[s[i]]==0){
                m[s[i]]++;
                c++;
            }else{
                ans=max(ans,c);
                while(j<n){
                    if(s[j]==s[i]){
                        j++;
                        
                        break;
                    }else{
                        m[s[j]]--;
                        j++;
                        c--;
                    }
                }
            }
            i++;
        }
        ans=max(ans,c);
        return ans;
    }
};