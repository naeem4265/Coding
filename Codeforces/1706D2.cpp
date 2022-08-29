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

    cin >> n >> k;
    ll d[n+5],mx=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(mx<(d[i]/k))   mx = d[i]/k;
    }

    ll l=0,r=mx;
    ll ans = mx;
    while(l<=r)
    {
        m = (l+r)/2;
        ll x = mx-m; if(x==0) break;
        for(i=0; i<n; i++)
        {
            ll y = d[i]/x;
            if(y>mx)  break;
        }
        if(i==n)
        {
            ans = m;
            r = m-1;
        }
        else
        {
            l = m+1;
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
        Please_AC(t);
    return 0;
}
