#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 40008
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

struct com
{
    bool operator()(E const& p1, E const& p2)
    {
        return p1.w < p2.w;
    }
};


ll p[limit];
ll Find(ll u)           // this part is for disjoint set union , initially p[x] = x;
{
    if(p[u]==u) return u;
    return p[u] = Find(p[u]);
}

void MST()
{
    ll node,edge,i,j;
    E z,zz;                // z is structure type variable
    vector <E> vec;
    //cin >> node >> edge;
    scanf("%d %d",&node, &edge);
    ll u,v,w;
    for(i=0; i<edge; i++)
    {
        //cin >> u >> v >> w;
        scanf("%d %d %d", &u, &v, &w);
        z.u = u;
        z.v = v;
        z.w = w;
        vec.pb(z);
    }

    sort(vec.begin(),vec.end());

    bool vis[limit];
    for(i=0; i<limit; i++)            // set DSU, parent of i is i
    {
        p[i] = i;
        vis[i] = 0;
    }

    vector<pair<ll,ll> > g[limit];


    for(i=0; i<edge; i++)
    {
        z = vec[i];
        u = z.u;
        v = z.v;
        w = z.w;
        if(Find(u)!=Find(v))
        {        // ans is the maximum cost
            p[p[u]] = p[v];       // parent of u is v
            g[u].pb(mp(v,w));
            g[v].pb(mp(u,w));     // cout <<u<<" "<<v<<" "<<w<<endl; // g Maximum spanning tree only
        }
    }


    vec.clear();
    priority_queue<E, vector<E>, com> q;
    vis[1] = 1;

    vector<pair<ll,ll> > out;
    ll ct = 0;
    ll sz = g[1].size();        //cout <<sz<<" naeem "<<q.size()<<endl;
    for(i=0; i<sz; i++)
    {
        z.u = 1;
        z.v = g[1][i].first;
        z.w = g[1][i].second;
        q.push(z);
    }
        //cout <<sz<<" naeem "<<q.size()<<endl;
    while(!q.empty())
    {
        z = q.top();
        ll cost = z.w;
        while(z.w>=cost)
        {
            q.pop();     //cout <<z.u<<" uv "<<z.v<<" "<<z.w<<endl;
            ct++;
            ll ssz = g[z.v].size();
            vis[z.v] = 1;
            for(i=0; i<ssz; i++)
            {
                zz.u = z.v;
                zz.v = g[z.v][i].first;
                zz.w = g[z.v][i].second;     //cout <<zz.u<<" "<<zz.v<<" "<<zz.w<<" "<<vis[zz.v]<<endl;
                if(vis[zz.v]) continue;
                q.push(zz);
            }

            if(q.empty()) break;
            z = q.top();
        }
        out.pb(mp(cost,ct));  //cout <<cost << " "<<ct<< " paici  "<<out.size()<<endl;
    }

    ct = 0;
    for(i=2; i<=node; i++)
    {
        if(vis[i]) ct++;
    }
    out.pb(mp(0,ct));
    out.pb(mp(2000000008,0));

    sort(out.begin(),out.end());
    ll Q;
    //cin >> Q;
    scanf("%d",&Q);
    sz = out.size();
    for(i=0; i<Q; i++)
    {
        ll c;
        //cin >> c;
        scanf("%d",&c);
        ll l=0,h=sz,m;
        ll ans = 0;
        while(l<=h)
        {
            m = (l+h)/2;
            if(out[m].first>=c)
            {
                ans = out[m].second;
                h = m-1;
            }
            else
                l = m+1;
        }
        printf("%d\n",ans);
    }
}

void solve(ll t)
{
    printf("Case %d:\n",t);
    MST();
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

