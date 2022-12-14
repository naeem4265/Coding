#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> m;
    ll d[n+5];
    vector<ll> g[n+5];
    for(i=0; i<m; i++)
    {
        ll u,v;
        cin >> u >> v;
        if(u>v)   swap(u,v);
        g[v].pb(u);
    }
    ll l=1,r;
    ll ans = 0;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<g[i].size(); j++)    l = max(l, g[i][j]+1);
        ans += (i-l+1);   //cout <<i<<" "<<l<<" "<<ans<<endl;
    }
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

