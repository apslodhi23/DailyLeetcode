// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int partition (vector<int>&a, int start, int end)  
{  
    int pivot = a[end]; 
    int i = start-1;
  
    for (int j = start; j <= end - 1; j++)  {  
        if (a[j] < pivot){ 
            i++;
            swap(a[i],a[j]);
            
        }  
    }  
    swap(a[i+1],a[end]);
    return (i + 1);  
}  
void quick(vector<int>&a, int start, int end){  
    if (start < end)  
    {  
        int p = partition(a, start, end); 
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}
    vector<int> sortArr(vector<int>arr, int n){
    //complete the function here
        quick(arr,0,n-1);
        return arr;
    }
};

// { Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}

  // } Driver Code Ends