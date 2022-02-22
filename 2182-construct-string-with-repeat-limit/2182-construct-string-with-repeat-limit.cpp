class Solution {
public:
    string repeatLimitedString(string s, int k) {
        int arr[26]={0};
        for(auto &x:s){
            arr[x-'a']++;
        }
        int i=25;
        string ans="";
        while(i>=0){
            int c=k;
            while(arr[i]!=0 and c--){
                ans+=i+'a';
                arr[i]--;
            }
            if(arr[i]==0){
                i--;
            }else{
                if(i!=0){
                    int j=i-1;
                    while(j>=0 and arr[j]==0){
                        j--;
                    }
                    if(j<0){
                        break;
                    }
                    ans+=j+'a';
                    arr[j]--;
                }else{
                    break;
                }
            }
        }
        return ans;
    }
};