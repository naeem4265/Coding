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
    ll d[n+5];
    for(i=0; i<n; i++) cin >> d[i];
    sort(d,d+n);
    ll from=0,mx = 0;
    for(i=1; i<=n; i++)
    {
        if(d[i]!=d[i-1])
        {
            mx = max(mx, i-from);
            from = i;
        }
    }
    mx = max(mx,i-from);
    ll ans = 0;
    if(n&1) ans=1;
    if(mx<=(n/2))
    {
        cout << ans <<endl;
        return ;
    }
    else
    {
        mx = min(mx,n-mx);
        cout << n-mx*2 <<endl;
    }
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
