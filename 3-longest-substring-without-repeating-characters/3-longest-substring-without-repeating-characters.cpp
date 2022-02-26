class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int ans=0;
        int c=0;
        int i=0;
        int n=s.length();
        int j=0;
        while(i<n){
            if(m[s[i]]==0){
                m[s[i]]++;
                c++;
            }else{
                ans=max(ans,c);
                while(j<i){
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
        return max(ans,c);
    }
};