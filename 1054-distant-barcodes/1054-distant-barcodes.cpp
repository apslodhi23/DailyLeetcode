class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& arr) {
        priority_queue<pair<int,int>>pq;
        map<int,int>m;
        for(auto x:arr){
            m[x]++;
        }
        for(auto x:m){
            pq.push({x.second,x.first});
        }
        int i=0;
        // if(arr.size()==1){
        //     return arr;
        // }
        while(pq.empty()==false){
            if(pq.size()==1){
                arr[i]=pq.top().second;
                break;
            }
            auto x=pq.top();
            pq.pop();
            auto y=pq.top();
            pq.pop();
            arr[i]=x.second;
            i++;
            arr[i]=y.second;
            i++;
            x.first--;
            y.first--;
            if(x.first!=0){
                pq.push(x);
            }
            if(y.first!=0){
                pq.push(y);
            }
        }
        // if(pq.empty()==false){
        //     arr[i]=pq.top().second;
        // }
        return arr;
    }
};