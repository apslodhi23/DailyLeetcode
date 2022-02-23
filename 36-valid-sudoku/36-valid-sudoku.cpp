class Solution {
public:
    bool col(vector<vector<char>>&arr,int i){
        unordered_map<char,int>m;
        for(int k=0;k<9;k++){
            if(arr[k][i]!='.'){
                if(m.find(arr[k][i])!=m.end()){
                    return false;
                }
                m[arr[k][i]]++;
            }
        }
        return true;
    }
    bool row(vector<vector<char>>&arr,int j){
        unordered_map<char,int>m;
        for(int k=0;k<9;k++){
            if(arr[j][k]!='.'){
                if(m.find(arr[j][k])!=m.end()){
                    return false;
                }
                m[arr[j][k]]++;
            }
        }
        return true;
    }
    bool grid(vector<vector<char>>&arr,int i,int j){
        unordered_map<char,int>m;
        for(int k=i;k<i+3;k++){
            for(int kk=j;kk<j+3;kk++){
                if(arr[k][kk]!='.'){
                    if(m.find(arr[k][kk])!=m.end()){
                        return false;
                    }
                    m[arr[k][kk]]++;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& arr) {
        for(int i=0;i<9;i++){
            if(col(arr,i)==false or row(arr,i)==false){
                return false;
            }
        }
        // cout<<11<<endl;
        if(grid(arr,0,0)==false or grid(arr,0,3)==false or grid(arr,0,6)==false or grid(arr,3,0)==false or grid(arr,3,3)==false or grid(arr,3,6)==false or grid(arr,6,0)==false or grid(arr,6,3)==false or grid(arr,6,6)==false){
            return false;
        }
        return true;
        
    }
};