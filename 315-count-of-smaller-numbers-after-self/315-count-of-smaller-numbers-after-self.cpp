class Solution {
public:
    void fun(vector<int>&ans,vector<pair<int,int>>&v,int i,int m,int j){
        vector<pair<int,int>>temp(j-i+1);
        int l=i;
        int r=m+1;
        int k=0;
        while(l<=m and r<=j){
            if(v[l].first<=v[r].first){
                temp[k++]=v[r++];
            }else{
               ans[v[l].second]+=j-r+1;
                temp[k++]=v[l++];
            }
        }
        while(l<=m){
            temp[k++]=v[l++];
        }
        while(r<=j){
            temp[k++]=v[r++];
        }
        for(int jj=0;jj<k;jj++){
            v[jj+i]=temp[jj];       
        }
    }
    void merge(vector<int>&ans,vector<pair<int,int>>&v,int i,int j){
        if(i>=j){
            return;
        }
        int mm=i+(j-i)/2;
        merge(ans,v,i,mm);
        merge(ans,v,mm+1,j);
        fun(ans,v,i,mm,j);
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i]={nums[i],i};
        }
        merge(ans,v,0,n-1);
        return ans;
    }
};