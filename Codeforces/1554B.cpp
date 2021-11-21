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
    cin >> n >> k;
    ll d[n+5];
    for(i=1; i<=n; i++)
        cin >> d[i];
    ll ans = -inf;

    i = sqrt(n*(n-1)-k*2*n);
    for(i=max(1LL,i); i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
             ans = max(ans, i*j-k*(d[i]|d[j]));
        }
    }
    cout << ans << endl;
    return ;

    for(i=n; i>0; i--)
    {
        for(j=i-1; j>0; j--)
        {
            ans = max(ans, i*j-k*(d[i]|d[j]));
            if(i*j < ans) break;
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
