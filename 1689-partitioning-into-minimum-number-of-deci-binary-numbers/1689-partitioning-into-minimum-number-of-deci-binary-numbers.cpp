class Solution {
public:
    int minPartitions(string n) {
        int mx=0;
        for(auto x:n){
            int c=x-'0';
            mx=max(mx,c);
        }
        return mx;
    }
};