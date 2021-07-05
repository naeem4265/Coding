#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1008
using namespace std;

vector<ll> g[limit];
ll W[limit][limit],cost[limit];

void fgraph(ll u)
{
    cost[u] = 0;
    queue<ll> q;
    q.push(u);
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(ll v: g[u])
        {
            cost[v] = min(cost[v], cost[u]+W[u][v]);
            q.push(v);
        }
    }
}

void solve(ll tt)
{
    ll i,j,n,m,k;
    cout <<"\nEnter number of vertex:\n";
    cin >> n;
    cout <<"\nEnter number of edge:\n";
    cin >> m;
    cout <<"\nEnter edge u to v and weight between u to v\n";

    for(i=0; i<limit; i++)
    {
        cost[i] = inf;
    }

    for(i=0; i<m; i++)
    {
        ll u,v,w;
        cin >> u >> v >> w;
        W[v][u] = w;
        g[v].pb(u);
    }

    cout <<"\nEnter source and destination:\n";
    ll s,t;
    cin >> s >> t;
    fgraph(t);
    cout <<"\nMinimum distance between "<<s<<" to "<<t<<" : "<<cost[s]<<endl;
    return ;
}
int  main()
{
    ll t,tt=1;
        solve(tt);
    return 0;
}

/*
12 21
1 2 9
1 3 7
1 4 3
1 5 2
2 6 4
2 7 2
2 8 1
3 6 2
3 7 7
4 8 11
5 7 11
5 8 8
6 9 6
6 10 5
7 9 4
7 10 3
8 10 5
8 11 6
9 12 4
10 12 2
11 12 5
1 12
*/
