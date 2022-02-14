class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int c=0;
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            if(arr[i][0]==0){
                c++;
            }
            for(int j=1;j<m;j++){
                if(arr[i][j]==0){
                    arr[i][0]=0;
                    arr[0][j]=0;
                }
            }
            
        }
        // for(auto x:arr){
        //     for(auto y:x){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=1;j--){
                if(arr[i][0]==0 or arr[0][j]==0){
                    arr[i][j]=0;
                }
            }
            if(c>0){
                arr[i][0]=0;
            }
        }
        
    }
};