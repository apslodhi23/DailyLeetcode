// class Solution {
// public:
//     int countEven(int num) {
//         int ans=0;
//         for(int i=2;i<=num;i++){
//             int k=i;
//             int s=0;
//             while(k!=0){
//                 s+=k%10;
//                 k=k/10;
//             }
//             if(s%2==0){
//                 ans++;
//             }
//         }
//         return ans;
//     }
// };

//  or
     class Solution {
public:
    int countEven(int num) {
        int temp = num, sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum % 2 == 0 ? temp / 2 : (temp - 1) / 2;
    }
};