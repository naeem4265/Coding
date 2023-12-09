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

void solve(ll tt)
{
    ll i,j,n,m,d,q;
    string s;
    cin >> n;
    ll k[n+5],h[n+5];
    for(i=1; i<=n; i++)
        cin >> k[i];
    for(i=1; i<=n; i++)
        cin >> h[i];
    k[0] = 0;
    h[0] = 0;
    ll ans = 0;
    for(i=n; i>0; i--)
    {
        d = k[i]-k[i-1];
        h[i-1] = max(h[i-1], h[i]-d);
    }
    for(i=1; i<=n; i++)
    {
        d = k[i]-k[i-1];
        if(h[i]>d)
        {
            h[i] = h[i-1]+d;
            h[i-1] = 0;
        }
    }
    for(i=1; i<=n; i++)
    {
        ans += (h[i]*(h[i]+1))/2;
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
