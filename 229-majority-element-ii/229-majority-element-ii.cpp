class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0;
        int num1=-1,num2=-1;
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]==num1){
                c1++;
            }else if(nums[i]==num2){
                c2++;
            }else if(c1==0){
                c1++;
                num1=nums[i];
            }else if(c2==0){
                num2=nums[i];
                c2++;
            }else{
                c1--;
                c2--;
            }
            i++;
        }
        c1=0,c2=0;
        for(auto x:nums){
            if(x==num1){
                c1++;
            }else if(x==num2){
                c2++;
            }
        }
        if(c1>n/3 and c2>n/3){
            return {num1,num2};
        }
        if(c1>n/3){
            return {num1};
        }
        if(c2>n/3){
            return {num2};
        }
        return {};
    }
};