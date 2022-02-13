class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int,int>m1,m2;
        int n=nums.size();
        if(n==1){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                m1[nums[i]]++;
            }else{
                m2[nums[i]]++;
            }
        }
        priority_queue<pair<int,int>>pq1,pq2;
        for(auto x:m1){
            pq1.push({x.second,x.first});
        }
        for(auto x:m2){
            pq2.push({x.second,x.first});
        }
        if(pq1.top().second!=pq2.top().second){
            return n-pq1.top().first-pq2.top().first;
        }else{
            auto x=pq1.top();
            pq1.pop();
            auto y=pq2.top();
            pq2.pop();
            
            if(x.first>y.first){
                if(pq2.empty()==false){
                    return n-x.first-pq2.top().first;
                }
                return n-x.first;
            }else{
                if(pq1.empty()==false){
                    return n-y.first-pq1.top().first;
                }else{
                    return n-y.first;
                }
            }
        }
        return n;
    }
};