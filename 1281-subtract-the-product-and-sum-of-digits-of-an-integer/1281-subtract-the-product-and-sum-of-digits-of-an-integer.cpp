class Solution {
public:
    int subtractProductAndSum(int n) {
        int s1=0,s2=1;
        while(n!=0){
            int k=n%10;
            n=n/10;
            s1+=k;
            s2*=k;
        }
        return s2-s1;
    }
};