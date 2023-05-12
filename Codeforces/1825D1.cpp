#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2e5+5;
const ll Mod = 1e9+7;
using namespace std;
vector<ll>  g[limit];
ll  child[limit];

ll dfs(ll u, ll  pr)
{
    child[u]  = 1;
    for(ll  v:   g[u])
    {
        if(v==pr)     continue;
        child[u]  +=   dfs(v, u);
    }
    return child[u];
}
ll ans;

void dfs2(ll u, ll  pr)
{
    ll  sum  =  0,  temp;
    for(ll  v:   g[u])
    {
        sum  +=  child[v];
    }
    temp   =  sum;         // cout  <<u<<" "<<sum<<endl;
    for(ll v:   g[u])
    {
        sum-=child[v];          //cout  <<u  <<"    hyre "<<v<<"  "<<sum<<"  "<<child[v]<<endl;
        ans =  (ans+sum*child[v])%Mod;
    }
    for(ll  v:   g[u])
    {
        if(v==pr)    continue;
        child[u] =  temp-child[v]+1;
        dfs2(v,  u);
    }
}

ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n  >> k;
    ans  =  (n*(n-1))%Mod;
    for(i=1;  i<n;   i++)
    {
        ll  u,v;
        cin >>  u >>  v;
        g[u].pb(v);
        g[v].pb(u);
    }
    if(k==1 ||  k==3)
    {
        cout  <<  1<<endl;
        return;
    }
    dfs(1, 0);
    dfs2(1,  0);
    m =  n*(n-1)/2;
    m  =  m%Mod;         //  cout   <<   ans   <<"  "<<m<<endl;
    ans = (bigmod(m, Mod-2)*ans)%Mod;
    cout   <<   ans  <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

