#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1008
using namespace std;
vector<int>g[limit];
int k;
int dfs(int u,int p)
{
    vector<int>stc;
    stc.clear();
    for(int v:g[u])
    {
        int x;
        if(v!=p)
        {
            x = dfs(v,u);
            stc.pb(x);
        }
    }
    sort(stc.begin(),stc.end());
    reverse(stc.begin(),stc.end());
    int sum=1,sz=stc.size(),i;
    if(sz<k) return sum;
    for(i=0; i<k; i++)
        sum += stc[i];         // cout <<i<<" "<<u<<" "<<p<<" "<<sz<<" "<<sum<<endl;
    return sum;
}

void solve(int t)
{
    int i,j,n,u,v;
    cin >> n >>k;
    for(i=0; i<limit; i++)
        g[i].clear();
    for(i=1;i<n;i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    cout <<"Case "<<t<<": "<<dfs(1,0)<<endl;
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

