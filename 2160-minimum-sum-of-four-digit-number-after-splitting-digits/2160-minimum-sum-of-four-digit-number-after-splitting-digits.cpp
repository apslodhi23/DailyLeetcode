class Solution {
public:
    int minimumSum(int num) {
        int a1=num%10;
        num/=10;
        int a2=num%10;
        num/=10;
        int a3=num%10;
        num/=10;
        int a4=num%10;
        num/=10;
        vector<int>v={a1,a2,a3,a4};
        sort(v.begin(),v.end());
        a1=v[0]*10+v[3];
        a2=v[1]*10+v[2];
        return a1+a2;
    }
};