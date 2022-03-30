class Solution {
public:
    vector<int> pivotArray(vector<int>& v, int pivot) {
        vector<int>v1,v2,v3;
        for(auto x:v){
            if(x<pivot){
                v1.push_back(x);
            }else if(x==pivot){
                v2.push_back(x);
            }else{
                v3.push_back(x);
            }
        }
        int i=0;
        for(auto x:v1){
            v[i]=x;
            i++;
        }
        for(auto x:v2){
            v[i]=x;
            i++;
        }
        for(auto x:v3){
            v[i]=x;
            i++;
        }
        return v;
    }
};