class Solution {
public:
    void fun(int &c,int i,int x,int y,string s,int n,int m){
        for(int j=i;j<s.length();j++){
            if(s[j]=='L'){
                y--;
            }else if(s[j]=='D'){
                x++;
            }else if(s[j]=='R'){
                y++;
            }else{
                x--;
            }
            if(x<0 or y<0 or x>=n or y>=n){
                return ;
            }
            else{
                c++;
            }
        }
    }
    vector<int> executeInstructions(int n, vector<int>& arr, string s) {
        int m=s.length();
        vector<int>ans(m);
        for(int i=0;i<m;i++){
            int c=0;
            fun(c,i,arr[0],arr[1],s,n,n);
            ans[i]=c;
        }
        return ans;
    }
};