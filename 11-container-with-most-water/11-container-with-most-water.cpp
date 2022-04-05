class Solution {
public:
    int maxArea(vector<int>& arr) {
        int i=0,j=arr.size()-1;
        int ans=0;
        ans=min(arr[0],arr[j])*(j-i);
        while(i<j){
            int h=min(arr[i],arr[j]);
            ans=max(ans,h*(j-i));
            while(i<j and arr[i]<=h){
                i++;
            }
            while(i<j and arr[j]<=h){
                j--;
            }
        }
        return ans;
    }
};