#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 998244353
#define limit 1000008
using namespace std;



void Please_AC(ll tt)
{
    ll i,j,n,m,k;

    cin >> n >> m;
    ll a[n+5];
    for(i=1; i<=n; i++)  cin >> a[i];
    vector<ll> g[n+5];
    ll in[n+5];
    memset(in, 0, sizeof(in));

    for(i=0; i<m; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        in[v]++;
    }

    queue<pair<ll,ll> > q;
    for(i=1; i<=n; i++)
    {
        if(!in[i])
            q.push({i,1});
    }
    ll ans = 0,mx=0;
    ll pre = 0,t=0;
    while(!q.empty())
    {
        pair<ll,ll> p;
        p = q.front();
        q.pop();
        ll u = p.first;
        ll lev = p.second;
        if(pre!=lev)
        {
            ans = (ans+a[u])%Mod;
            t = a[u];
            pre = lev;
        }
        else
        {
            ans = (ans+ max(0LL, t-a[u]))%Mod;
            t = max(t, a[u]);
        }

        for(ll v: g[u])
        {
            if(in[v]>1)
            {
                a[v] = (a[v]+a[u])%Mod;
            }
            else if(a[v]==0LL)
                a[v]=1;
            in[v]--;
            if(!in[v])
            {
                q.push({v,lev+1});
            }
        }  cout <<u<<" "<<ans<<" "<<t<<" "<<lev<<" "<<a[u]<<endl;
    }
    cout << ans <<endl;


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
        Please_AC(t);
    return 0;
}
