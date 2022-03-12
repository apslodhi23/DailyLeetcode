class Solution {
public:
    static bool cmp(pair<int,pair<int,int>>p1,pair<int,pair<int,int>>p2){
        if(p1.first<p2.first){
            return true;
        }
        else if(p1.first==p2.first){
            return p1.second.second<p2.second.second;
        }
        return false;
    }
    
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,pair<int,int>>>v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int k=nums[i];
            int rk=0;
            int c=0;
            while(k!=0){
                rk=rk*10 +k%10;
                k=k/10;
                c++;
            }
            int sk=0;
            if(rk==0){
                sk=mapping[0];
            }else{
            while(c--){
                sk=sk*10+mapping[rk%10];
                rk/=10;
            }
            }
            
            // cout<<sk<<endl;
            v.push_back({sk,{nums[i],i}});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++){
            nums[i]=v[i].second.first;
        }
        return nums;
    }
};