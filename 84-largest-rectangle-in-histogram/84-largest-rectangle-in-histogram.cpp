class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        vector<int>l(n,0),r(n,0);
        stack<int>s;
        for(int i=0;i<n;i++){
            while(s.empty()==false and arr[s.top()]>=arr[i]){
                s.pop();
            }
            if(s.empty()==true){
                l[i]=-1;
            }else{
                l[i]=s.top();
            }
            s.push(i);
        }
        while(s.empty()==false){
            s.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(s.empty()==false and arr[s.top()]>=arr[i]){
                s.pop();
            }
            if(s.empty()==true){
                r[i]=n;
            }else{
                r[i]=s.top();
            }
            s.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int ll=l[i]+1;
            int rr=r[i]-1;
            ans=max(ans,(rr-ll+1)*arr[i]);
        }
        return ans;
    }
};