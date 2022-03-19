class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {
        if(t%2==1){
            return {};
        }
        int tc=t/2;
        int a=tc-c;
        int b=c-a;
        if(b>=0 and a>=0){
            return {a,b};
        }
        return {};
    }
};