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
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    ll d[n+5];
    for(i=0; i<n; i++) cin >> d[i];
    m = 1<<30;
    ll ans = 0;
    for(j=0; j<31; j++)
    {
        ll ct=0;
        for(i=0; i<n; i++)
        {
            if(d[i]&m)
                ct++;
        }       //cout <<m<<" "<<ct<<" "<<k<<" "<<ans<<endl;
        if((n-ct)<=k)
        {
            ans += m;
            k -= (n-ct);
        }
        m /= 2;
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
