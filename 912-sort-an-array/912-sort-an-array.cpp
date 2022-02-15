class Solution {
public:
    void mergesort(vector<int>&arr,int l,int mid,int r){
        int i=l,j=mid+1;
        int k=0;
        int ss=r-l+1;
        vector<int>sortt(ss,0);
        while(i<=mid and j<=r){
            if(arr[i]<arr[j]){
                sortt[k]=arr[i];
                i++;
            }else{
                sortt[k]=arr[j];
                j++;
            }
            k++;
        }
        if(i>mid){
            while(j<=r){
                sortt[k]=arr[j];
                j++;
                k++;
            }
        }else{
            while(i<=mid){
                sortt[k]=arr[i];
                i++;
                k++;
            }
        }
        for(int i=0;i<ss;i++){
            arr[i+l]=sortt[i];
        }
    }
    void merge(vector<int>&arr,int l,int r){
        int mid;
        if(l<r){
            mid=l+(r-l)/2;
            merge(arr,l,mid);
            merge(arr,mid+1,r);
            mergesort(arr,l,mid,r);
        }
        return;
    }
    vector<int> sortArray(vector<int>& nums) {
        merge(nums,0,nums.size()-1);
        return nums;
    }
};