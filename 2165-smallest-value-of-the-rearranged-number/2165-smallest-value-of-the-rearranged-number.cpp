class Solution {
public:
    long long smallestNumber(long long num) {
        int sign =1;
        if(num<0){
            sign =-1;
        }
        num=abs(num);
        vector<int>v;
         long long ans=0;
        if(sign==1){
            while(num!=0){
                int k=num%10;
                v.push_back(k);
                num=num/10;
            }
            sort(v.begin(),v.end());
            int n=v.size();
            vector<bool>vis(n,false);
            int j=0,i=0;
            while(j<n and v[j]==0){
                j++;
            }
            if(j==n){
                return 0;
            }
             ans=v[j];
            vis[j]=true;
            while(i<n){
                if(vis[i]==false){
                    ans=ans*10+v[i];
                    vis[i]=true;
                }
                i++;
            }
        }else{
            while(num!=0){
                int k=num%10;
                v.push_back(k);
                num=num/10;
            }
            sort(v.rbegin(),v.rend());
            int n=v.size();
            vector<bool>vis(n,false);
            int j=0,i=0;
            while(j<n and v[j]==0){
                j++;
            }
            if(j==n){
                return 0;
            }
           ans=v[j];
            vis[j]=true;
            while(i<n){
                if(vis[i]==false){
                    ans=ans*10+v[i];
                    vis[i]=true;
                }
                i++;
            }
        }
        return ans*sign;
    }
};