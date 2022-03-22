class Solution {
public:
    int ans=0;
    void fun(vector<string>&wrd,map<char,int>m,vector<int>sr,int i,int sum){
        if(i>=wrd.size()){
            // cout<<sum<<endl;
            ans=max(ans,sum);
            return;
        }
        map<char,int>mm=m;
        int ss=0;
        bool f1=false;
        for(auto x:wrd[i]){
            if(mm.find(x)==mm.end()){
                f1=true;
                break;
            }else{
                ss+=sr[x-'a'];
                mm[x]--;
                if(mm[x]==0){
                    mm.erase(x);
                }
            }
        }
        // cout<<ss<<endl;
        if(f1==true){
            fun(wrd,m,sr,i+1,sum);
        }else{
            fun(wrd,m,sr,i+1,sum);
            fun(wrd,mm,sr,i+1,sum+ss);
        }
    }
    int maxScoreWords(vector<string>& wrd, vector<char>& ch, vector<int>& sr) {
        map<char,int>m;
        for(auto x:ch){
            m[x]++;
        }
        int s=0;
        fun(wrd,m,sr,0,s);
        return ans;
    }
};