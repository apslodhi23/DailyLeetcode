class Solution {
public:
    int minimumSwap(string s1, string s2) {
        if(s1.size() != s2.size()) return false;
        int cnt = 0,cnt2= 0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i] != s2[i])
            {
                if(s1[i]=='x') 
                    cnt++;
                else 
                    cnt2++;
            }
        }
        int ans = 0;
        ans = cnt/2 + cnt2/2 ;
        cnt = cnt%2;
        cnt2 = cnt2%2;

        if(cnt!=cnt2) 
            return -1;
        else{
            if(cnt == 1) 
                return ans+2;
        }
        return ans;
}
};