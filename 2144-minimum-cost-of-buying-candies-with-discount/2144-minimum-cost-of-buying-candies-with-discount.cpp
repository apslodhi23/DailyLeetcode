class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int i=cost.size()-1;
        int ans=0;
        while(i>=0){
            ans+=cost[i];
            i--;
            if(i==-1){
                return ans;
            }else{
                ans+=cost[i];
                i--;
            }
            i--;
        }
        return ans;
    }
};