class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=n+m;
        int i=m-1;
        int j=n-1;
        int kk=k-1;
        while(i>=0 and j>=0){
            if(nums1[i]>nums2[j]){
                nums1[kk]=nums1[i];
                kk--;
                i--;
            }else{
                nums1[kk]=nums2[j];
                j--;
                kk--;
            }
        }
        while(j>=0){
            nums1[kk]=nums2[j];
            kk--;
            j--;
        }
    }
};

// OR

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1, j = n - 1, tar = m + n - 1;
//         while (j >= 0) {
//             nums1[tar--] = i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
//         }
//     }
// };