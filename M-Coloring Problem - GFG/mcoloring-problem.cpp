// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Function to determine if graph can be coloured with at most M colours such
//that no two adjacent vertices of graph are coloured with same colour.
bool safe(int col,int i,vector<int>color,bool graph[101][101],int n){
    for(int j=0;j<n;j++){
        if(color[j]==col and graph[i][j]==true){
            return false;
        }
    }
    return true;
}
bool fun(bool graph[101][101],int m,int i,vector<int>&color,int v){
    if(i==v){
        return true;
    }
    for(int j=0;j<m;j++){
        if(safe(j,i,color,graph,v)==true){
            color[i]=j;
            if(fun(graph,m,i+1,color,v)){
                return true;
            }
            color[i]=-1;
        }
    }
    return false;
}
bool graphColoring(bool graph[101][101], int m, int V)
{
    // your code here
    vector<int>color(V,-1);
    return fun(graph,m,0,color,V);
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends