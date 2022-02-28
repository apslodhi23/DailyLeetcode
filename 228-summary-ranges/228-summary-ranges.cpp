class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        string s="";
        int n=nums.size();
        if(n==0){
            return {};
        }
        int c1=nums[0],c2=0;
        s=to_string(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                c2++;
            }else{
                // cout<<1<<endl;
                if(c2==0){
                    ans.push_back(s);
                    // continue;
                }else{
                    s+="->";
                    s+=to_string(c1+c2);
                    ans.push_back(s);
                }
                c2=0;
                c1=nums[i];
                s=to_string(c1);
            }
        }
        if(c2==0){
            ans.push_back(s);
            return ans;
        }else{
            s+="->";
            s+=to_string(c1+c2);
            ans.push_back(s);
        }
        return ans;
    }
};