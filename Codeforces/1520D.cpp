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
    ll difp[n+3],difn[n+4];
    memset(difp,0,sizeof(difp));
    memset(difn,0,sizeof(difn));

    for(i=1; i<=n; i++)
    {
        ll d;
        cin >> d;
        if( d >= i)
            difp[d-i]++;
        else
            difn[i-d]++;
    }
    ll ans = 0;
    for(i=0; i<=n; i++)
    {
        ans += difp[i]*(difp[i]-1)/2;
        ans += difn[i]*(difn[i]-1)/2;
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
