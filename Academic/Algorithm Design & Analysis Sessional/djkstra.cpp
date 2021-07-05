#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("input.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define limit 1008
using namespace std;

///please copy the bottom input and paste it in input.txt file and
///store 174078.cpp and input.txt file at the same directory.

ll node;
ll dis[limit],mat[limit][limit];
bool vis[limit];

void djkstra(ll u)
{
    ll i,v=0;
    vis[u] = 1;
    for(i=1; i<=node; i++)
    {
        if(dis[i]>dis[u]+mat[u][i])
            dis[i] = dis[u]+mat[u][i];
    }
    for(i=1; i<=node; i++)
    {
        if(dis[v]>dis[i] && !vis[i])
            v = i;
    }
    if(v) djkstra(v);
}

void solve(ll t)
{
    ll i,j,k,edge;
    string s;
    cin >> node >> edge;
    getchar();

    map<string,ll> mp;
    k = 1;
    ll u,v,w;

    for(i=0; i<=node; i++)
    {
        for(j=0; j<=node; j++)
        {
            mat[i][j] = inf;
        }
        dis[i] = inf;
    }

    for(i=0; i<edge; i++)
    {
        getline(cin,s);
        if(mp[s]==0) mp[s] = k++;
        u = mp[s];

        getline(cin,s);
        if(mp[s]==0) mp[s] = k++;
        v = mp[s];

        cin >> w;
        getchar();

        mat[u][v] = w;
        mat[v][u] = w;
    }
    for(i=1; i<=node; i++)
        mat[i][i] = 0;

    string source,desti;
    getline(cin,source);
    u = mp[source];

    getline(cin,desti);
    v = mp[desti];

    dis[0] = inf;
    dis[u] = 0;
    djkstra(u);
    cout <<"\nDistance from "<<source<<" to "<<desti<<" : "<<dis[v] << endl;
    return ;
}

int  main()
{
//    Fast
    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

///file input
/**
8 10
Malibu
Santa Barbara
45
Malibu
Los Angeles
20
Santa Barbara
Barstow
45
Santa Barbara
Los Angeles
30
Los Angeles
Riverside
25
Los Angeles
San Diego
100
Barstow
Riverside
75
Riverside
Palm Springs
75
Riverside
San Diego
90
San Diego
El Cajon
15
Los Angeles
Barstow
**/
