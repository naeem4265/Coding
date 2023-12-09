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
    ll d[2][n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[0][i];
    }
    d[0][n+1] = 0;
    d[1][0] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> m;
        d[1][i] = d[1][i-1]+m;
    }
    for(i=n; i>0; i--)
    {
        d[0][i] = d[0][i+1]+d[0][i];
    }
    ll ans = inf;


    for(i=1; i<=n; i++)
    {        //cout <<d[0][i]<<" "<<d[1][i] <<endl;
        ans = min(ans, max(d[0][i+1],d[1][i-1]));
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
