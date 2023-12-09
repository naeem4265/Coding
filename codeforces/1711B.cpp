#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> m;
    ll d[n+5],cnt[n+5];
    memset(cnt, 0, sizeof(cnt));
    vector<pair<ll,ll> > p;
    ll u,v;

    for(i=1; i<=n; i++)  cin >> d[i];
    for(i=1; i<=m; i++)
    {
        cin >> u >> v;
        cnt[u]++;
        cnt[v]++;
        p.pb({u,v});
    }
    if(m%2==0)
    {
        cout <<0<<endl;
        return ;
    }
    ll ans = 1e18;
    for(i=1; i<=n; i++)
    {
        if(cnt[i]&1)
            ans = min(ans, d[i]);
    }
    for(i=0; i<m; i++)
    {
        u = p[i].first;
        v = p[i].second;
        if((cnt[u]+cnt[v])%2==0)
            ans = min(ans, d[u]+d[v]);
    }
    cout << ans <<endl;


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
