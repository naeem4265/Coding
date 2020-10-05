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
vector<int> g[limit];
int ct[2];
void dfs(int u,int p,int ck)
{
    int i,sz=g[u].size();
    for(i=0; i<sz; i++)
    {
        int v=g[u][v];
        if(v!=p)
            dfs(v,u,ck^1);
    }
}
void dfs(int u,int p,int ck)
{
    int i,sz=g[u].size();
    for(i=0; i<sz; i++)
    {
        int v=g[u][v];
        if(v!=p)
            dfs(v,u,ck^1);
    }
}
void solve(int t)
{
    int i,j,n,m,zero=0,one=1;
    cin >> n;
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
    }
    for(i=1; i<n; i++)
    {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    string s;
    cin >> s;
    for(i=0; i<n; i++)
        if(s[i]=='0')
            zero++;
        else
            one++;
    ct[0]=ct[1]=0;
    dfs(1,0,1);
    if(ct[0]==zero && ct[1]==one)
    {
        dfs2(1,1,1);
        cout <<ans<<endl;
        return ;
    }
    ct[0]=ct[1]=0;
    dfs(1,0,0);
    if(ct[0]==zero && ct[1]==one)
    {
        dfs2(1,1,0);
        cout <<ans<<endl;
        return ;
    }
    cout <<-1<<endl;
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

