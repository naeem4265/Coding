#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 100008
using namespace std;
vector<ll> g[limit];
ll height[limit],pt[limit][20];

///LCA build O(n*logn)
void pt_build(ll u,ll p)
{
    height[u] = height[p]+1;
    pt[u][0] = p;
    for(ll j=1; j<20; j++)
    {
        pt[u][j] = pt[pt[u][j-1]][j-1];
    }
}

///LCA query O(logn)
ll LCA(ll u, ll v)
{
    if(height[u]>height[v])
        swap(u,v);
    ll dis = height[v]-height[u];
    /// make height u,v same
    for(ll j=19; j>=0; j--)
    {
        if( dis&(1<<j) )
            v = pt[v][j];
    }
    if(u==v) return u;
    for(ll j=19; j>=0; j--)
    {
        if(pt[u][j]!=pt[v][j])
        {
            u = pt[u][j];
            v = pt[v][j];
        }
    }
    return pt[u][0];
}


void Please_AC(ll tt)
{
    ll i,j,n,m,k=1,q;
    ll u,v;
    cin >> n;
    string s="Main",t;
    map<string,ll> mp;
    for(i=0; i<n+5; i++)
    {
        for(j=0; j<20; j++)
        {
            pt[i][j] = 0;
        }
        height[i] = 0;
    }
    u = k;
    mp[s] = k++;
    cout <<"Case "<<tt<<":\n";
    for(i=0; i<n; i++)
    {
        cin >> s;
        if(s[0]=='+')
        {
            cin >> s;
            cin >> s;
            v = k;
            mp[s] = k++;
            cin >> s;
            cin >> s;
            u = mp[s];
            g[u].pb(v);
            pt_build(v,u);
        }
        else
        {
            cin >> s;
            cin >> t;
            cin >> t;
            cin >> t;
            cin >> t;
            t.pop_back();
            t.pop_back();
            u = mp[s];
            v = mp[t];
            if(!u || !v || height[u]>height[v] || LCA(u,v)!=u)
            {
                cout <<"no\n";
                continue;
            }
            else
            {
                cout <<"yes\n";
            }
        }
    }
    return ;
}

///spoj LCASQ
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
