class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.length();
        stack<int>st;
            for(int i=0;i<n;i++){
                if(s[i]=='(')
                    st.push(i);
                else{
                    if(st.empty()==false and s[st.top()]=='('){
                        st.pop();
                    }else{
                        st.push(i);
                    }
                }
            }
        if(st.empty()==true){
            return n;
        }
        int ans=0;
        int a=n,b;
        while(st.empty()==false){
            b=st.top();
            st.pop();
            ans=max(ans,a-b-1);
            a=b;
        }
        return max(ans,a);
    }
};