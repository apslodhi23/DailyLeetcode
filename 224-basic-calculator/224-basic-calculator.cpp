class Solution {
public:
    long long fun(string &s,int &i){
        long long ans=0;
        bool neg=false;
        while(i<s.length() and s[i]!=')'){
            if(s[i]=='+' or s[i]==' '){
                i++;
                // continue;
            }else if(s[i]=='-'){
                i++;
                neg=true;
            }
            else if(s[i]=='('){
                i++;
                ans+=neg?-fun(s,i):fun(s,i);
                neg=false;
            }else{
                long long num=0;
                while(i<s.size()&&isdigit(s[i]))
                    num = num*10 + s[i++]-'0';
                ans+=neg?-num:num;
                neg=false;
            }
            // i++;
        }
        i++;
        return ans;
    }
    int calculate(string s) {
        int i=0;
        return (int)fun(s,i);
    }
};