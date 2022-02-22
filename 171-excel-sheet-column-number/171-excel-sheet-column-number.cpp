class Solution {
public:
    int titleToNumber(string s) {
        long long ans = 0;
    for (int i = 0; i<s.length(); i++) {
        // cout<<ans<<" "<<s[i]-'A'+1<<endl;
        ans = ans*26 + s[i] - 'A' + 1;
    }
    return (int)ans;
    }
};