#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
string s="tareq&shawon";
char ch[limit];

void dfs(int u,int pr,int l)
{
    if(l==s.size())
        return 1;
    if(ch[u]==s[l])
        l++;
    vis[u] = 1;
    for(int v:&g[u])
    {
        if(vis[v]==0)
        {
            vis[v] = 1;
            dfs(v,u,l);
        }
    }
    return 0;
}

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    for(i=1; i<n; i++)
    {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for(i=1; i<=n; i++)
    {
        cin >> ch[i];
    }
    for(i=1; i<=n; i++)
    {
        sort(g[i].begin(),g[i].end());
    }
    dfs(1,0,0);
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

