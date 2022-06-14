//optimised soltion 
// time:- O(32);
// space:- O(1);


class Solution {
public:
    int reverse(int x) {
        long long int ans = 0;
        while (x) {
            long long int temp = ans * 10 + x % 10;
            if (temp<INT_MIN or temp>INT_MAX)
                return 0;
            ans = temp;
            x /= 10;
        }
        return ans;
    }
};