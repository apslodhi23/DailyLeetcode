class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        stack<int>s;
        int n=arr.size();
        vector<int>ans(n,0);
        s.push(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            int c=0;
            while(s.empty()==false and s.top()<=arr[i]){
                c++;
                s.pop();
            }
            if(s.empty()==true){
                ans[i]=c;
            }
            else if(arr[i]<s.top()){
                ans[i]=c+1;
            }
            s.push(arr[i]);
        }
        return ans;
    }
};