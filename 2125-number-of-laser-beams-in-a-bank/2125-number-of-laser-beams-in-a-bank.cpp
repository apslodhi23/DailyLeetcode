class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int ans=0;
        int k=0;
        for(int i=0;i<bank[0].length();i++){
            if(bank[0][i]=='1'){
                k++;
            }
        }
        for(int i=1;i<n;i++){
            int c=0;
            for(int j=0;j<bank[i].length();j++){
                if(bank[i][j]=='1'){
                    c++;
                }
            }
            if(c!=0){
            ans+=k*c;
            k=c;
            }
        }
        return ans;
    }
};