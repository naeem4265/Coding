#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 100008
using namespace std;
ll ans[limit];

struct st
{
    ll v,serial;
};

vector<st> g[limit];

void dfs(ll node,ll pr, ll carry,ll idx)
{
    ans[idx] = 2+carry;
    ll i = g[node].size()-1;//cout <<endl<<i<<" node "<<node<<endl;
    for(; i>=0; i--)
    {
        st z;
        z = g[node][i];
        if(z.v==pr) continue;
        dfs(z.v, node, carry^1, z.serial);
    }
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    bool ok=0;
    for(i=0; i<=n+5; i++)
        g[i].clear();
    st z;
    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        z.v = v;
        z.serial = i;
        g[u].pb(z);
        z.v = u;
        z.serial = i;
        g[v].pb(z);
        if(g[u].size()>2) ok = 1;
        if(g[v].size()>2) ok = 1;
    }
    if(ok)
    {
        cout <<"-1\n";
        return ;
    }
    for(i=1; i<=n; i++)
    {
        if(g[i].size()==1)
        {
            st z;
            z = g[i][0];
            dfs(z.v,i,0,z.serial);
            break;
        }
    }
    for(i=1; i<n; i++)
        cout <<ans[i]<<" ";
    cout <<endl;
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
