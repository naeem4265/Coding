#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1008
using namespace std;


struct edge{
    ll u,v,c;
}z;
ll n, m, dis[limit];
vector<edge>E;
void bellmanford(ll tt)
{
    ll i,j;
    cin >> n >> m;
    for(i=0; i<=n; i++)
        dis[i] = 1e18;
    for(i=0; i<m; i++)
    {
        cin >> z.u >> z.v >> z.c;
        z.c = z.c;
        E.pb(z);
    }
    bool negcycle = 0;
    dis[1] = 0;
    for(i=0; i<=n; i++)
    {
        for(edge e: E)
        {
            if(dis[e.u]+e.c < dis[e.v]){
                dis[e.v] =  e.c + dis[e.u];
                if(i==n)  negcycle=1;
            }
        }
    }
    if(negcycle)
        cout <<-1<<endl;
    else
        cout <<dis[n]<<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        bellmanford(t);
    return 0;
}
