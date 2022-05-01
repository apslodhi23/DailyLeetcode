class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        
        int n=nums.size();
        vector<int>pref(n);
        if(nums[0]%p==0){
            pref[0]=1;
        }
        for(int i=1;i<n;i++){
            if(nums[i]%p==0){
                pref[i]=pref[i-1]+1;
            }else{
                pref[i]=pref[i-1];
            }
        }
        set<string>ss;
        for(int i=0;i<n;i++){
            string s="";
            for(int j=i;j<n;j++){
                s+=to_string(nums[j]);
                s+='.';
                int c=pref[j]-pref[i];
                if(nums[i]%p==0){
                    c++;
                }
                if(c<=k){
                    ss.insert(s);
                }
            }
        }
        return ss.size();
    }
};