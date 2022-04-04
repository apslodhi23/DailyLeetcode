class Solution {
public:
    int minMoves(int t, int dd) {
        int ans=0;
        while(t!=1 and dd!=0){
            if(t%2==1){
                t--;
            }else{
                t/=2;
                dd--;
            }
            ans++;
        }
        ans+=t;
        ans--;
        return ans;
    }
};