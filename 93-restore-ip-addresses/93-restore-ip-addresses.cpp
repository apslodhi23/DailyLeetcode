class Solution {
public:
    vector<string>ans;
    // int c=0;
    void fun(string s,string p,int i,int c){
        if(i>=s.length() ){
            if(c==3)
            ans.push_back(p);
            return;
        }
        if(p.length()>0){
            p+=".";
            c++;
        }
        if(s[i]=='0'){
            fun(s,p+s[i],i+1,c);
            return;
        }
        int k=0;
        for(int j=i;j<min(i+4,(int)s.length());j++){
            if(isdigit(s[j])==false){
                return;
            }
            else{
                k=k*10 +s[j]-'0';
                if(k>=0 and k<=255){
                    fun(s,p+to_string(k),j+1,c);
                }else{
                    return;
                }
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        int c=0;
        fun(s,"",0,c);
        return ans;
    }
};