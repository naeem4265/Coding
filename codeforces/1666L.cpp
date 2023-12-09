#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;
vector<ll> ans, ans2, g[limit];
ll ct[limit],s;

ll dfs(ll u, ll x)
{
    if(ct[u]==x || u==s)
        return 0;
    if(ct[u])
    {
        ll t = ct[u];
        ct[u] = x;
        ans.pb(u);
        return t;
    }
    ans.pb(u);
    ct[u] = x;
    for(ll v: g[u])
    {
        ll t = dfs(v, x);
        if(t)
            return t;
    }
    ans.pop_back();
    return 0;
}

ll dfs2(ll u, ll x, ll pr)
{
    if(ct[u]==x || u==s)
        return 0;
    if(ct[u]==pr)
    {
        ll t = ct[u];
        ct[u] = x;
        ans2.pb(u);
        return t;
    }
    ct[u] = x;
    ans2.pb(u);
    for(ll v: g[u])
    {
        ll t = dfs2(v, x, pr);
        if(t)
            return t;
    }
    ans2.pop_back();
    return 0;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> m >> s;
    ll u,v;
    while(m--)
    {
        cin >> u >> v;
        g[u].pb(v);
    }
    for(i=0; i<g[s].size(); i++)
    {
        u = g[s][i];
        ans.clear();
        ans.pb(s);
        ll t = dfs(u, i+1);
        if(t)
        {
            ans2.pb(s);
            u = g[s][t-1];
            dfs2(u,i+2, i+1);

            cout <<"Possible\n";
            cout <<ans.size()<<endl;
            for(auto &u: ans)
                cout <<u<<" ";
            cout <<endl;
            cout <<ans2.size()<<endl;
            for(auto &u: ans2)
                cout <<u<<" ";
            cout <<endl;
            return ;
        }
    }
    cout <<"Impossible\n";
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
/*
7 11 1
1 2
1 5
2 1
2 3
3 4
4 5
5 1
5 6
6 7
7 5
6 3
*/
