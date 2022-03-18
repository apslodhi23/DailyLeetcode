class Solution {
public:
    vector<int>ans;
    void fun(int num,int i,int l,int h){
        if(num>h){
            return;
        }
        if(i<1 or i>10){
            return; 
        }
        if(num>=l and num<=h){
            ans.push_back(num);
        }
        num=num*10 +i;
        fun(num,i+1,l,h);
    }
    vector<int> sequentialDigits(int low, int high) {
        for(int i=1;i<=9;i++){
            int num=0;
            fun(num,i,low,high);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};