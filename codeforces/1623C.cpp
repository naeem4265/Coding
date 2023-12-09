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
#define limit 200008
using namespace std;
ll h[limit],d[limit],n;

bool check(ll m)
{
    ll i;
    for(i=n-1; i>1; i--)
    {
        if((d[i]+h[i])<m)   return 0;
        ll x = d[i];
        ll ct = min(d[i]+h[i]-m,h[i]);
        ct /= 3LL;
        d[i-1] += ct;
        d[i-2] = ct*2;
    }
    if((d[0]+h[0])<m)   return 0;
    if((d[1]+h[1])<m)   return 0;
    return 1;
}

void solve(ll tt)
{
    ll i,j;
    cin >> n;
    for(i=0; i<n+5; i++)
    {
        d[i] = 0;
    }

    for(i=0; i<n; i++)
    {
        cin >> h[i];
    }
    ll lo=0,hi=h[n-1],ans = 0;
    while(lo<=hi)
    {
        ll m = (lo+hi)/2;
        d[n-1] = 0;
        d[n-2] = 0;
        d[n-3] = 0;
        if(check(m))
        {
            ans = max(ans,m);
            lo = m+1;
        }
        else
        {
            hi = m-1;
        }
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
        solve(t);
    return 0;
}
