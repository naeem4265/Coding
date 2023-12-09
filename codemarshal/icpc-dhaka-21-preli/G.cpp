#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 30008
using namespace std;

vector<ll> g[limit];
ll w[limit], odd, even, sum, node,mx,n;

void dfs(ll u, ll pr,ll dis)
{
    if(dis&1 && dis)
    {
        odd++;
        sum += w[u];
    }
    else if(dis)
    {
        even++;
        sum -= w[u];
    }
    for(ll v: g[u])
    {
        if(v==pr)  continue;
        dfs(v, u, dis+1);
    }
}

void dfs2(ll u, ll pr,ll ev, ll od, ll sm)
{
    sm += od*w[pr];
    sm -= ev*w[pr];
    sm -= w[u];
    ll amrodd = ev+1;
    ll amreven = n-amrodd-1;
    ll smt = -sm;
    smt -= amrodd*w[u];
    smt += amreven*w[u];
    smt += w[pr];

       //cout <<pr<<" "<<od<<" "<<ev<<" "<<node<<" "<<sm<<endl;
      // cout <<u<<" "<<sm<<" "<<amrodd<<" "<<amreven<<endl;

    //cout<<u<<" "<<smt<<endl;
    if(mx==smt)
    {
        if(node>u)  node = u;
    }
    if(mx<smt)
    {
        node = u;
        mx = smt;
    }
    for(ll v: g[u])
    {
        if(v==pr)  continue;
        dfs2(v, u, amreven, amrodd, smt);
    }
}

void Please_AC(ll tt)
{
    ll i,j;
    scanf("%lld", &n);

    sum = 0;
    odd=0;
    even=0;
    for(i=0; i<limit; i++)
    {
        g[i].clear();
    }

    for(i=1; i<=n; i++)
    {
        scanf("%lld", &w[i]);
    }
    for(i=1; i<n; i++)
    {
        ll u,v;
         scanf("%lld %lld", &u, &v);
         g[u].pb(v);
         g[v].pb(u);
    }
    dfs(1, 0, 0);
    sum -= odd*w[1];
    sum += even*w[1];
    node = 1;
    mx = sum;
   // cout<<node<<" "<<sum<<endl;

    for(ll v: g[1])
    {
        ll sumt = sum;
        sumt += odd*w[1];
        sumt -= even*w[1];
        //sumt += w[1];
        dfs2(v, 1, even, odd, sum);
    }

    printf("Case %lld: ",tt);
    printf("%lld\n", node);


    return ;
}


int  main()
{
  //  Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
