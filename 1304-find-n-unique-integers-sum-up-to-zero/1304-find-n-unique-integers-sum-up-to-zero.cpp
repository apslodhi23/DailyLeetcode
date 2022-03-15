class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n%2==0){
            int i=1;
            for(int k=0;k<n/2;k++){
                ans.push_back(i);
                ans.push_back(-i);
                i++;
            }
        }else{
            ans.push_back(0);
            int i=1;
            for(int k=0;k<n/2;k++){
                ans.push_back(i);
                ans.push_back(-i);
                i++;
            }
        }
        return ans;
    }
};