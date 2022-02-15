class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        for(int i=1;i<=500001;i++){
            if(m[i]==0){
                return i;
            }
        }
        return 1;
    }
};