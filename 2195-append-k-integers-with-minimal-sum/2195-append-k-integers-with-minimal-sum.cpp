class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long sum=(long long )k*(k+1)/2;
        for(auto x:set<long long>(nums.begin(),nums.end())){
            if(x<=k)
            sum+=(++k)-x;
        }
        return sum;
    }
};