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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    ll a[n+5], b[n+5];
    for(i=0; i<n; i++)
        cin >> a[i];
    for(i=0; i<n; i++)
        cin >> b[i];
    ll ans = 0;
    if(a[0]>b[0])
        swap(a[0],b[0]);
    for(i=1; i<n; i++)
    {
        if(a[i]>b[i])
            swap(a[i],b[i]);
        ans += abs(a[i]-a[i-1]);
        ans += abs(b[i]-b[i-1]);
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
