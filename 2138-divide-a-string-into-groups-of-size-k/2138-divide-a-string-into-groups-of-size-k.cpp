class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        int n=s.length();
        if(n%k==0){
            int i=0;
            while(i<n){
                ans.push_back(s.substr(i,k));
                i+=k;
            }
        }else{
            int c=n%k;
            c=k-c;
            while(c--){
                s+=fill;
            }
            int i=0;
            while(i<n){
                ans.push_back(s.substr(i,k));
                i+=k;
            }
        }
        return ans;
    }
};