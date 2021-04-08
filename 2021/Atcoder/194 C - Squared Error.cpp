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

void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll D[n+5],cum[n+5];

    for(i=1; i<=n; i++) cin >> D[i];
    cum[n+1] = 0;
    cum[n] = D[n];
    for(i=n-1; i>=1; i--)
    {
        cum[i] = cum[i+1]+D[i];
    }
    ll ans = 0;
    for(i=1; i<=n; i++)
    {
        ans += (n-1)*D[i]*D[i];
        ans -= (2*D[i]*cum[i+1]);
    }
    cout << ans <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
