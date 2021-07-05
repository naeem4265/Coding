#include<bits/stdc++.h>
#define Freed freopen ("MST.txt","r",stdin);
#define Fout freopen ("out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

struct st
{
    ll u,v,w;
};
bool operator <(st a,st b)
{
    return a.w < b.w;
}

ll pr[limit];
ll Find(ll u)
{
    if(pr[u]==u) return u;
    return pr[u] = Find(pr[u]);
}

void solve(ll t)
{
    ll i,j,n,m,k;

    for(i=0; i<limit; i++)
    {
        pr[i] = i;
    }
    cin >> n;
    cin >> m;
    st edge[m+2];
    for(i=0; i<m; i++)
    {
        cin >> edge[i].u >> edge[i].v >> edge[i].w ;
    }
    sort(edge, edge+m);

    ll cost = 0;
    vector<pair<ll,ll> > out;
    for(i=0; i<m; i++)
    {
        ll u,v;
        u = edge[i].u;
        v = edge[i].v;
        if(pr[Find(u)]==pr[Find(v)]) continue;
        pr[Find(u)] = pr[Find(v)];
        cost += edge[i].w;
        out.pb(mp(u,v));
    }
    cout <<"\nTotal MST cost : "<<cost <<endl;
    cout <<"\nSelected edge for the MST:\n";
    for(i=0; i<out.size(); i++)
    {
        cout <<out[i].first<<" "<<out[i].second<<endl;
    }
    return ;
}

int  main()
{
    Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
