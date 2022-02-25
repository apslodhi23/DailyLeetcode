class Solution {
public:
    bool fun(vector<vector<char>>arr,int i){
        unordered_map<char,int>m,m1;
        for(int j=0;j<9;j++){
            if(m.find(arr[i][j])!=m.end()){
                return false;
            }
            if(arr[i][j]!='.')
                m[arr[i][j]]++;
        }
        for(int j=0;j<9;j++){
            if(m1.find(arr[j][i])!=m1.end()){
                return false;
            }
            if(arr[j][i]!='.')
            m1[arr[j][i]]++;
        }
        return true;
    }
    bool fun1(vector<vector<char>>&arr,int i,int j){
        unordered_map<char,int>m1;
        for(int k=i;k<i+3;k++){
            for(int l=j;l<j+3;l++){
                if(m1.find(arr[k][l])!=m1.end()){
                    return false;
                }
                if(arr[k][l]!='.')
                m1[arr[k][l]]++;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>&arr) {
        for(int i=0;i<9;i++){
            if(fun(arr,i)==false){
                return false;
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                // cout<<i<<" "<<j<<endl;
                if(fun1(arr,i,j)==false){
                    return false;
                }
            }
        }
        return true;
    }
};