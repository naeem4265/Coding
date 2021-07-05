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
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++) cin >> d[i];
    sort(d,d+n);
    m = n-1;
    ll ans = 0;
    ll cum[n+5];
    cum[0] = 0;
    cum[1] = 0;
    for(i=1; i<m; i++)
    {
        ans -= (d[m]-d[i]+d[i]);
        cum[i] = (d[i]-d[i-1])*(i-1)+cum[i-1];
        ans -= cum[i];
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
