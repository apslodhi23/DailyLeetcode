class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int x=-1;
        int n=a.size();
        for(int i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                x=i-1;
                break;
            }
        }
        if(x==-1){
            reverse(a.begin(),a.end());
            return;
        }
        int y=-1;
        for(int i=n-1;i>x;i--){
            if(a[i]>a[x]){
                y=i;
                break;
            }
        }
        swap(a[x],a[y]);
        sort(a.begin()+x+1,a.end());
        
    }
};