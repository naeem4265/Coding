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


void Please_AC(ll tt)
{
    ll i,j,n;

    cin >> n;
    ll d[n+5];
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }

    ll ans = 0;
    vector<ll> v;
   // cout << "TEst";
    for(i=1; i<=n; i++)
    {
        if(vis[i]) continue;
        ll next = i;
        v.clear();
        while(vis[next]==0)
        {
            vis[next] = 1;
            v.pb(next);
            next = d[next];
        }
        sort(v.begin(), v.end());
        ll ct = 0,sz = v.size();
        for(j=1; j<sz; j++)
            ct += v[j];
        ct += v[0]*(sz-1);

        ll ct2 = 1+v[0];
        v.pb(1);
        sz++;
        sort(v.begin(), v.end());
        for(j=1; j<sz; j++)
            ct2 += v[j];
        ct2 += v[0]*(sz-1);
        ans += min(ct, ct2);
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
