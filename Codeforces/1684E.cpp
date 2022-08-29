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

void solve(ll tt)
{
    ll i,j,n,m,k;
    cin >> n >> k;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    sort(d,d+n);

    ll ans = Mod;
    ll l=0,h=n-1;
    while(l<=h)
    {
        m = (l+h)/2;
        map<ll,bool> vis;
        for(i=0; i<m; i++)
        {
            vis[d[i]] = 1;
        }
        map<ll,ll> mp;
        for(i=m; i<n; i++)
        {
            mp[d[i]]++;
        }
        vector<pair<ll,ll> > v;
        for(auto x: mp)
        {
            v.pb({x.second, x.first});
        }
        sort(v.begin(), v.end());

        ll mex=0,kk=k;
        for(i=0; i<v.size(); i++)
        {
            while(kk && v[i].first)
            {
                while(vis[mex])  mex++;
                vis[mex] = 1;
                kk--;
                v[i].first--;
            }
        }
        while(vis[mex])  mex++;    //cout <<mex<<endl;
        ll ct = 0;
        for(i=0; i<m; i++)
        {
            if(d[i]>mex) ct++;
        }
        for(i=0; i<v.size(); i++)
        {
            if(v[i].first && v[i].second>mex)
                ct++;
        }
        ans = min(ans, ct);  //cout <<m<<" "<<d[m]<<" "<<ct<<" "<<ans<<" "<<mex<<endl;
        if(mex<d[m])
        {
            h = m-1;
        }
        else
        {
            l = m+1;
        }
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
