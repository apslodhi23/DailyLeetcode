class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int c=1;
        int n=arr.size();
        int i=n-1;
        while(i>=0){
            int k=arr[i]+c;
            if(k==10){
                c=1;
                arr[i]=0;
            }else{
                arr[i]=k;
                c=0;
            }
            i--;
        }
        if(c!=0){
            vector<int>ans;
            ans.push_back(1);
            for(auto x:arr){
                ans.push_back(x);
            }
            return ans;
        }
        return arr;
    }
};