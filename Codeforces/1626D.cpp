#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 10000000071000000007
#define limit 1000008
using namespace std;

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

ll kasakasi(ll x)
{
    ll y = 1;
    while(y<x)
        y = y<<1;
    return y-x;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    sort(d,d+n);
    d[n] = n+5;
    vector<ll> v;
    for(i=0,j=1; j<=n; j++)
    {
        if(d[i]!=d[j])
        {
            v.pb(j-i);
            i = j;
        }
    }
    ll csum[n+5];
    csum[0] = 0;
    m = v.size();
    for(i=0; i<v.size(); i++)
    {
        csum[i+1] = csum[i]+v[i];
    }
    ll ans=1e18;
    ll ct1,ct2,ct3;
    for(i=0; i<=m; i++)
    {
        ct1 = kasakasi(csum[i]);
        ll rem = csum[m]-csum[i];
        ll p = bigmod(2LL,32);
        while(p)
        {
            ll l=i+1,r = m,mid,idx=m;
            while(l<=r)
            {
                mid = (l+r)/2;
                ll x = csum[mid]-csum[i];
                if(x<=p)
                {
                    idx = mid;
                    l = mid+1;
                }
                else
                {
                    r = mid-1;
                }
            }
            ct2 = kasakasi(csum[idx]-csum[i]);
            ct3 = kasakasi(csum[m]-csum[idx]);
           // cout <<i<<" "<<ans<<" "<<idx<<endl;
            //cout <<csum[i]<<" "<<csum[idx]-csum[i]<<" "<<csum[m]-csum[idx]<<" "<<ct1<<" "<<ct2<<" "<<ct3<<endl;
            ans = min(ans, ct1+ct2+ct3);
            p = p>>1;
        }
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
        solve(t);
    return 0;
}
