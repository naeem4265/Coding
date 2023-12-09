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
    ll i,j,n,x;
    cin >> n >> x;
    ll a[n+5];
    ll ans = 0,mn=1e10,mx=-1e10;
    cin >> a[0];
    mn = a[0]-x;
    mx = a[0]+x;
    for(i=1; i<n; i++)
    {
        cin >> a[i];
        mn = max(mn, a[i]-x);
        mx = min(mx, a[i]+x);
        if(mx<mn)
        {
            ans++;
            mn = a[i]-x;
            mx = a[i]+x;
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
        Please_AC(t);
    return 0;
}
