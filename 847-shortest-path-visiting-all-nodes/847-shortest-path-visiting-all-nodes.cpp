class Solution {
public:
    int fun(vector<vector<int>>&arr){
        int n=arr.size();
        int all=(1<<n)-1;
        queue<pair<int,pair<int,int>>>q;
        set<pair<int,int>>st;
        for(int i=0;i<n;i++){
            int mask=(1<<i);
            q.push({i,{0,mask}});
            st.insert({i,mask});
        }
        while(!q.empty()){
            auto x=q.front();
            q.pop();
            int val=x.first;
            int data=x.second.first;
            int maskk=x.second.second;
            for(auto y:arr[val]){
                int mask= maskk|(1<<y);
                if(mask==all){
                    return data+1;
                }else if(st.count({y,mask})>0){
                    continue;
                }
                st.insert({y,mask});
                q.push({y,{data+1,mask}});
            }
        }
        return 0;
    }
    int shortestPathLength(vector<vector<int>>& arr) {
        int n=arr.size();
        if(n==1){
            return 0;
        }
        if(n==2){
            return 1;
        }
        return fun(arr);
    }
};