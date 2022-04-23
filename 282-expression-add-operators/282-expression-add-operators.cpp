class Solution {
public:
    vector<string>ans;
    string s ;
    int tar;
    void fun(int i,const string &str,long rs,long ps){
        if(i==s.length()){
            if(rs==tar){
                ans.push_back(str);
            }
            return;
        }
        string ss="";
        long  num=0;
        for(int j=i;j<s.length();j++){
            if(j>i and s[i]=='0'){
                break;
            }
            ss+=s[j];
            num=num*10 + s[j]-'0';
            if(i==0){
                fun(j+1,str+ss,num,num);
            }else{
                fun(j+1,str+"+"+ss,rs+num,num);
                fun(j+1,str+"-"+ss,rs-num,-num);
                fun(j+1,str+"*"+ss,rs-ps+ps*num,ps*num);
            }
        }
    }
    vector<string> addOperators(string ss, int t) {
        s=ss;
        tar=t;
        fun(0,"",0,0);
        return ans;
    }
    
};
