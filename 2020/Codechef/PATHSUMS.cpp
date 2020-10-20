#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 108
using namespace std;
ll A[limit];
bool vis[limit];
vector<int>g[limit];

void dfs(int u)
{
    int i,v,sz=g[u].size();
    for(i=0; i<sz; i++)
    {
        v = g[u][i];
        if(vis[v]==0)
        {
            if(A[u]==1)
                A[v] = 2;
            if(A[u]==2)
                A[v] = 1;
            vis[v] = 1;
            dfs(v);
        }
    }
}
void solve(int t)
{
    int i,j,n,m,k,u,v;
    cin >> n ;
    for(i=0; i<limit; i++)
    {
        g[i].clear();
        vis[i]=0;
        A[i]=0;
    }
    for(i=0; i<n-1; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    vis[1]=1;
    A[1] = 1;
    dfs(1);
    for(i=1; i<=n; i++)
    {
        if(i!=1) cout <<" ";
        cout <<A[i];
    }
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

