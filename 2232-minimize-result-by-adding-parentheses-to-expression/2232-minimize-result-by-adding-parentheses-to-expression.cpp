class Solution {
public:
    string minimizeResult(string s) {
        string s1="",s2="";
        long long i=0;
        for(;i<s.size();i++){
            if(s[i]=='+'){
                i++;
                break;
            }
        }
        s1=s.substr(0,i-1);
        s2=s.substr(i);
        
        long long ans=(stoi(s1)+stoi(s2));
        string as="("+s+")";
        
        
        for(i=0;i<s1.size();i++){
            
            string ss="";
            long long c1=1;
            if(i>0){
                ss=s1.substr(0,i);
                c1=stoi(ss);
            }
            ss+="(";
            // cout<<ss<<endl;
            string skk=s1.substr(i);
            long long c2=stoi(skk);
            ss+=skk;
            ss+="+";
            // cout<<ss<<endl;
            for(long long j=s2.size();j>0;j--){
                string sss=ss;
                skk=s2.substr(0,j);
                long long c3=stoi(skk);
                sss+=skk;
                sss+=")";
                long long c4=1;
                skk="";
                if(j<s2.size()){
                    skk=s2.substr(j);
                    c4=stoi(skk);
                }
                sss+=skk;
                long long v=c2+c3;
                cout<<c1<<" "<<c4<<endl;
                int c=c1*c4;
                cout<<c1<<endl;
                v*=c;
                cout<<v<<endl;
                if(ans>v){
                    ans=v;
                    as=sss;
                }
                cout<<sss<<endl;
            }
        }
        return as;
    }
};