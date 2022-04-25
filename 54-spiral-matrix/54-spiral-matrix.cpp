class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int l=0,t=0,r=arr[0].size()-1,d=arr.size()-1;
        int c=0;
        vector<int>ans;
        while(l<=r and t<=d){
            if(c==0){
                for(int i=l;i<=r;i++){
                    ans.push_back(arr[t][i]);
                }
                t++;
                c++;
            }else if(c==1){
                for(int i=t;i<=d;i++){
                    ans.push_back(arr[i][r]);
                }
                r--;
                c++;
            }
            else if(c==2){
                for(int i=r;i>=l;i--){
                    ans.push_back(arr[d][i]);
                }
                d--;
                c++;
            }else if(c==3){
                for(int i=d;i>=t;i--){
                    ans.push_back(arr[i][l]);
                }
                l++;
                c=0;
            }
        }
        return ans;
    }
};