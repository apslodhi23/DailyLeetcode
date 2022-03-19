class Solution {
public:
    string tictactoe(vector<vector<int>>& a) {
        vector<vector<char>>v(3,vector<char>(3,' '));
        for(int i=0;i<a.size();i++){
            int x=a[i][0];
            int y=a[i][1];
            if(i%2==0){
                v[x][y]='X';
            }
            else{
                v[x][y]='O';
            }
        }
        for(int i=0;i<3;i++){
            map<char,int>mp;
            for(int j=0;j<3;j++){
                mp[v[i][j]]++;
            }
            if(mp['X']==3){
                return "A";
            }
            if(mp['O']==3){
                return "B";
            }
        }
        for(int i=0;i<3;i++){
            map<char,int>mp;
            for(int j=0;j<3;j++){
                mp[v[j][i]]++;
            }
            if(mp['X']==3){
                return "A";
            }
            if(mp['O']==3){
                return "B";
            }
        }
        map<char,int>mp;
        for(int i=0;i<3;i++){
            mp[v[i][i]]++;
        }
        if(mp['X']==3){
            return "A";
        }
        if(mp['O']==3){
            return "B";
        }
        mp.clear();
        for(int i=0;i<3;i++){
            mp[v[i][3-i-1]]++;
        }
        if(mp['X']==3){
            return "A";
        }
        if(mp['O']==3){
            return "B";
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(v[i][j]==' '){
                    return "Pending";
                }
            }
        }
        return "Draw";
    }
};