class Solution {
public:
    string freqAlphabets(string s) {
        vector<char>v(27);
        char cc='a';
        for(int i=0;i<26;i++){
            v[i+1]=cc;
            cc++;
        }
        string ans="";
        string ss="";
        int i=0;
        int n=s.length();
        while(i<s.length()){
            if(i<n-2 and s[i+2]=='#'){
                ss.push_back(s[i]);
                ss+=s[i+1];
                i+=3;
                int c=stoi(ss);
                cout<<c<<endl;
                ans.push_back(v[c]);
                ss="";
            }else{
                ss=s[i];
                int c=stoi(ss);
                ans.push_back(v[c]);
                ss="";
                i++;
            }
        }
        return ans;
    return ans;
    }
};