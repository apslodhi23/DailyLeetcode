// bruteforce soltuion
// time: O(n*m)
// space: O(1)


class Solution {
public:
    int strStr(string str, string pt) {
        int n=str.length(),m=pt.length();
        for(int i=0;i<=n-m;i++){
            if(str.substr(i,m)==pt){
                return i;
            }
        }
        return -1;
    }
};