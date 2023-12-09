#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    cin >> n;
    ll d[n+5];
    for(i=0,j = 0; i<n; i++)
    {
        ll x;
        cin >> d[i];
    }
    sort(d, d+n);

    ll ans = d[n-1]-d[0];
    ll ct = 0;
    for(i=1; i<n-1; i++)
    {
        if(d[i]!=d[0])
        {
            ct = d[i]-d[0];  break;
        }
    }
    m = ans+ct;
    ct = 0;
    for(i=n-2; i>0; i--)
    {
        if(d[i]!=d[n-1])
        {
            ct = d[n-1]-d[i];
            break;
        }
    }
    cout << max(ans+ct, m) <<endl;
    return;
}

int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //cout <<"Case "<<t<<": ";
        Please_AC(t);
    }
    return 0;
}
