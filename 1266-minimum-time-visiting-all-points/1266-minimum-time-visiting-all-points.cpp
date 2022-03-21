class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& arr) {
        int ans=0;
        int x=arr[0][0],y=arr[0][1];
        for(int i=1;i<arr.size();i++){
            int a=abs(x-arr[i][0]);
            int b=abs(y-arr[i][1]);
            ans+=max(a,b);
            x=arr[i][0];
            y=arr[i][1];
        }
        return ans;
    }
};