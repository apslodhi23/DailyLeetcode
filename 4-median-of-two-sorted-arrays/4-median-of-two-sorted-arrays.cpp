class Solution {
public:
    float fun(vector<int>&arr,vector<int>&brr,int n,int m){
        if(n>m){
            return fun(brr,arr,m,n);
        }
        int s=0,e=n;
        int minn=(m+n+1)/2;
        while(s<=e){
            int m1=(s+e)/2;
            int m2=minn-m1;
            int l1=(m1==0)?INT_MIN:arr[m1-1];
            int l2=(m2==0)?INT_MIN:brr[m2-1];
            int r1=(m1==n)?INT_MAX:arr[m1];
            int r2=(m2==m)?INT_MAX:brr[m2];
            if(l1<=r2 and l2<=r1){
                if((m+n)%2!=0){
                    return max(l1,l2);
                }else{
                    return (max(l1,l2)+min(r1,r2))/(2.0);
                }
            }
            if(l1>r2){
                e=m1-1;
            }else{
                s=m1+1;
            }
        }
        return -1;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        return fun(nums1,nums2,n,m);
    }
};