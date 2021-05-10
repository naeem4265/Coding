#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll h[n+5],c[n+5];
    ll l=Mod,r = -Mod;

    for(i=0; i<n; i++)
    {
        cin >> h[i];
        if(l>h[i]) l = h[i];
        if(r<h[i]) r = h[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> c[i];
    }

    ll ans = 1e18;
    while(l<=r)
    {
        m = (l+r)/2;
        ll x = 0,y =0,z=0;
        for(i=0; i<n; i++)
        {
            x += abs(h[i]-(m+1))*c[i];
            y += abs(h[i]-m)*c[i];
            z += abs(h[i]-(m-1))*c[i];
        }
        ans = min(ans,min({x,y,z}));  //cout <<i<<" "<<m<<" "<<y<<" "<<ans<<endl;
        if(x>=y)
        {
            r = m-1;
        }
        else
        {
            l = m+1;
        }
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
