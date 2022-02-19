class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n=arr.size();
        int i=0;
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        while(i<n-3){
            int j=i+1;
            while(j<n-2){
                int l=j+1,k=n-1;
                while(l<k){
                    if((long long)arr[i]+arr[j]+arr[k]+arr[l]==(long long)target){
                        ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                        int t=arr[l];
                        while(l<k and arr[l]==t ){
                            l++;
                        }
                        t=arr[k];
                        while(l<k and arr[k]==t){
                            k--;
                        }
                    }else if((long long)arr[i]+arr[j]+arr[k]+arr[l]<target){
                        l++;
                    }else{
                        k--;
                    }
                }
                int t=arr[j];
                while(j<n and arr[j]==t){
                    j++;
                }
                // j++;
            }
            int t=arr[i];
            while(i<n and arr[i]==t ){
                i++;
            }
            // i++;
        }
        return ans;
    }
};