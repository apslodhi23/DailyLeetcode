class Solution {
public:
    int climbStairs(int n) {
        int ans=0;
        int x=1;
        if(n<2){
            return 1;
        }
        int y=2;
        for(int i=3;i<=n;i++){
            int k=x+y;
            x=y;
            y=k;
        }
        return y;
    }
};