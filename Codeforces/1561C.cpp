#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    vector<ll> d[n+5];
    vector<pair<ll,ll> > v;

    for(i=0; i<n; i++)
    {
        cin >> k;
        d[i].resize(k+3);
        for(j=0; j<k; j++)
        {
            cin >> d[i][j];
        }

        ll mx = d[i][0];
        for(j=0; j<k; j++)
        {
            if( mx < (d[i][j]-j) )
                mx = d[i][j]-j;
        }

        d[i][k] = mx+1;
        d[i][k+1] = k;

        v.pb(mp(mx+1,k));
    }
    sort(v.begin(), v.end());
    ll ans = v[0].first, ct = v[0].second;

    for(i=1; i<n; i++)
    {
        if( (ans+ct) < v[i].first )
        {
            ans = (v[i].first-ct);
        }
        ct += v[i].second;   //cout <<i<<" "<<ans<<" "<<ct<<" "<<v[i].first<<" "<<v[i].second<<endl;
    }

    cout << ans << endl;

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
        solve(t);
    return 0;
}
