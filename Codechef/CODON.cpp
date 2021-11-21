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

void dfs(ll node,ll lev)
{
    ll sz = g[node].size();
    for(ll i=0; i<sz; i++)
    {
        v = g[node][i];
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m >> l;
    cin >> d;
    cin >> s;
    ll u[n+1],v[m+5];
    for(i=0; i<m; i++){ cin >> a; u[i] = a-1;   }
    for(i=0; i<m; i++){ cin >> a; v[i] = a-1;   }
    for(i=0; i<m; i++)
    {
        g[u[i]].pb(v[i]);
        g[v[i]].pb(u[i]);
    }
    for(i=0; i<n; i++)
    {
        if(s[i]==d[0])
        {
            ans += dfs(i,0);
        }
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
