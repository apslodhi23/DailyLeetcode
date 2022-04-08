class Solution {
public:
    int fun(vector<string>&wrd,map<char,int>m,vector<int>&sr,int i){
        if(i>=wrd.size()){
            return 0;
        }
        map<char,int>mm=m;
        int s=0,f=0;
        for(auto x:wrd[i]){
            if(mm.find(x)==mm.end()){
                f++;
                break;
            }
            s+=sr[x-'a'];
            mm[x]--;
            if(mm[x]==0){
                mm.erase(x);
            }
        }
        if(f>0){
            return fun(wrd,m,sr,i+1);
        }
        int k=s+fun(wrd,mm,sr,i+1);
        int k1=fun(wrd,m,sr,i+1);
        return max(k,k1);
    }
    int maxScoreWords(vector<string>& words, vector<char>& ch, vector<int>& score) {
        map<char,int>m;
        for(auto x:ch){
            m[x]++;
        }
        return fun(words,m,score,0);
    }
};