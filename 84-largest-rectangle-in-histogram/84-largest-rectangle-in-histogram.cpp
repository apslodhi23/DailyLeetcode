class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int>s;
        int i=0;
        int n=h.size();
        int l[n],r[n];
        for(int i=0;i<n;i++){
            while(s.empty()==false and h[s.top()]>=h[i]){
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
            while(s.empty()==false and h[s.top()]>=h[i]){
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
            int k=rr-ll;
            k++;
            
            ans=max(ans,h[i]*k);
        }
        return ans;
    }
};