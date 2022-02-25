class Solution {
public:
    string addBinary(string a, string b) {
        int c=0;
        int i=a.length()-1;
        int j=b.length()-1;
        string ans="";
        while(i>=0 or j>=0 or c!=0){
            int cc=0;
            if(i>=0){
                if(a[i]=='1'){
                    cc++;
                }
                i--;
            }
            if(j>=0){
                if(b[j]=='1'){
                    cc++;
                }
                j--;
            }
            if(c==1){
                cc++;
            }
            if(cc==2){
                ans.push_back('0');
                c=1;
            }else if(cc==3){
                ans.push_back('1');
                c=1;
            }else if(cc==0){
                ans.push_back('0');
                    c=0;
            }else{
                ans.push_back('1');
                c=0;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};