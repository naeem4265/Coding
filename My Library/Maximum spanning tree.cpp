#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;

/// Maximum Spanning Tree. Kruskal's Algorithm O(E logE)
struct E
{
    ll u,v,w;
};

bool operator<(E a,E b)
{
    return a.w>b.w;
}

ll p[limit];
ll Find(ll u)           // this part is for disjoint set union , initially p[x] = x;
{
    if(p[u]==u) return u;
    return p[u] = Find(p[u]);
}

void MST()
{
    ll node,edge,i,j;
    E z;                // z is structure type variable
    vector <E> vec;
    cin >> node >> edge;
    ll u,v,w;
    for(i=0; i<edge; i++)
    {
        cin >> u >> v >> w;
        z.u = u;
        z.v = v;
        z.w = w;
        vec.pb(z);
    }

    sort(vec.begin(),vec.end());

    for(i=0; i<limit; i++)            // set DSU, parent of i is i
        p[i] = i;

    vector<pair<ll,ll> > g[limit];

    ll ans = 0;
    for(i=0; i<edge; i++)
    {
        z = vec[i];
        u = z.u;
        v = z.v;
        w = z.w;
        if(Find(u)!=Find(v))
        {
            ans += w;           // ans is the maximum cost
            p[u] = p[v];       // parent of u is v
            g[u].pb(mp(v,w));
            g[v].pb(mp(u,w));       // g Maximum spanning tree only
        }
    }

    cout << ans <<endl;
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    MST();
    return 0;
}
