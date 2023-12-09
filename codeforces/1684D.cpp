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
ll d[limit],n,k;

void solve(ll tt)
{
    ll i,j,m;

    cin >> n >> k;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }

    vector<pair<ll,ll> > v;

    for(i=n-1,j=0; i>=0; i--,j++)
    {
        m = j-k+1;
        v.pb({d[i]-m, i});
    }
    sort(v.begin(), v.end());
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));
    for(i=n-1; k>0; i--,k--)
    {
        vis[v[i].second] = 1;
    }
    ll ans = 0;
    for(i=0,j=0; i<n; i++)
    {
        if(vis[i])
        {
            j++;
            continue;
        }
        ans += d[i]+j;
    }
    cout << ans <<endl;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
