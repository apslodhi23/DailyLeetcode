class Solution {
public:
    int mySqrt(int x) {
        long long i=1;
        for(;i*i<x;i++);
        if(i*i<=x){
            return i;
        }
        return i-1;
        
    }
};