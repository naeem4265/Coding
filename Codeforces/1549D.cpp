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
    ll i,j,n,m,k,one=1;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];

    ll ans  = 0,l=2,r=n-2;
    for(i=0; i<n-1; i++)
    {
        if( __gcd(d[i],d[i+1]) > one)
            ans = 1;
        d[i] = abs(d[i]-d[i+1]);
    }
    n--;

    for(i=0; i<n; i++)  cout <<d[i]<<" "; cout << endl;

    while(l<=r)
    {
        m = (l+r)/2;      cout << ans<<" "<<m<<" "<<l<<" "<<r<<endl;
        ll x = 0;
        for(i=0; i<m ; i++)
        {
            x = __gcd(x,d[i]);
        }
        if( x>one )
        {
            l = m+1;
            ans = max(ans,m);     cout <<"paici 1\n";
            continue;
        }
        for(i=0,j=i+m; j<n; i++,j++)
        {
            x = (x*d[i])/__gcd(x,d[i]);
            x = __gcd(x,d[j]);
            if( x > one )
            {
                l = m+1;
                ans = max(ans,m);     cout <<i<<" "<<j<<" paici 2\n";
                break;
            }
        }
        if(j==n)
            r = m-1;
    }

    cout << ans+1 << endl;
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
