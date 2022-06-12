class Solution {
public:
    
    vector<int> successfulPairs(vector<int>& ar, vector<int>& brr, long long sc) {
        vector<int>ans;
        sort(brr.begin(),brr.end());
        for(auto x:ar){
            int i=0,j=brr.size();
            int a=0;
            while(i<j){
                int m=i+(j-i)/2;
                if((long long)x*brr[m]>=sc){
                    a=max(a,(int)brr.size()-m);
                    j=m;
                }else{
                    i=m+1;
                }
            }
            ans.push_back(a);
        }
        return ans;
        
    }
};