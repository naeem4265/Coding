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
#define limit 1000008
using namespace std;

ll cnt[maxn];
bool big[maxn];
void add(ll v, ll p, ll x)
{
    cnt[ col[v] ] += x;
    for(auto u: g[v])
    {
        if(u != p && !big[u])
            add(u, v, x)
    }
}

void del(ll v, ll p, ll x)
{
    cnt[ col[v] ] -= x;
    for(auto u: g[v])
    {
        if(u != p && !big[u])
            add(u, v, x)
    }
}

void dfs(ll v, ll p, bool keep)
{
    ll mx = -1, bigChild = -1;
    for(auto u : g[v])
    {
        if(u != p && sz[u] > mx)
        {
            mx = sz[u];
            bigChild = u;
        }
    }
    for(auto u : g[v])
    {
        if(u != p && u != bigChild)
            dfs(u, v, 0);  // run a dfs on small childs and clear them from cnt
    }
    if(bigChild != -1)
    {
        dfs(bigChild, v, 1);
        big[bigChild] = 1;  // bigChild marked as big and not cleared from cnt
    }
    add(v, p, 1);         //added to the ans subtree of v

    if(bigChild != -1)
        big[bigChild] = 0;

    if(keep == 0)
        del(v, p, 1);          //delete subtree of v
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;

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
