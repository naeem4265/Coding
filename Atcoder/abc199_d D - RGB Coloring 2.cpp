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
ll n;
ll dp[22][4];
vector<ll> g[22];
ll color[22];

ll rec(ll u,ll col)
{        // cout <<u<<" "<<ans <<endl;
    if(u>n)
    {
        return 1;
    }
    if(dp[u][col]!=-1) return dp[u][col];

    ll temp = 0;
    for(int i=1,j=0; i<=3; i++)
    {
        for(j=g[u].size()-1; j>=0; j--)
        {
            ll v = g[u][j];
            if(color[v]==i) break;
        }
        if(j<0)
        {
            color[u] = i;
            temp += rec(u+1,i);
            color[u] = 0;
        }
    }
    return dp[u][col] = temp;
}

void solve(ll t)
{
    ll i,j,m,k;
    string s;
    cin >> n >> m;
    for(i=0; i<m; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    memset(dp,-1,sizeof(dp));

    cout << rec(1,0) <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
