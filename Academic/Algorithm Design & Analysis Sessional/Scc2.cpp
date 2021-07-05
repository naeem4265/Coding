#include<bits/stdc++.h>
using namespace std;
vector<int>g[10000];
vector<int>t[10000];
vector<int>temp;
int v[10000];
void dfs(int u)
{
    v[u] = 1;
    for(int i=0;i<g[u].size();i++){
        if(v[g[u][i]]==0){
        dfs(g[u][i]);
        }
    }
    temp.push_back(u);
}
void dfs2(int u)
{
    cout <<u<<"-->";
    v[u]=1;
    for(int i=0; i<t[u].size(); i++){
        if(v[t[u][i]]==0){
        dfs2(t[u][i]);
        }
    }
}
int  main()
{
    freopen("sample.txt","r",stdin);
    freopen("ans.txt","w",stdout);
    int n,i,j,k,x,y;
    cin >>n;
    while(cin >>x >>y){
    g[x].push_back( y );
    t[y].push_back( x );
    }
    for(i=0;i<n;i++){
    if(v[i]==0){
        dfs(i);
    }
    }
    for(i=0;i<=n;i++)
    v[i] = 0;
    cout <<"The SCC's are :\n";
    for(i=n-1;i>=0; i--){
        if(v[temp[i]]==0){
            dfs2(temp[i]);
        cout <<endl;
        }
    }
    return 0;
}
