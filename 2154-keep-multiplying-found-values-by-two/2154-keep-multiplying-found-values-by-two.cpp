class Solution {
public:
    int findFinalValue(vector<int>& nums, int x) {
        map<int,int>m;
        for(auto xx:nums){
            m[xx]++;
        }
        while(m.find(x)!=m.end()){
            x=x*2;
        }
        return x;
    }
};