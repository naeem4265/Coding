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
    for(i=1; i<=n; i++)
        cin >> d[i];
    for(i=1; i<=n; i++)
    {
        if(d[i]!=i) break;
    }
    if(i>n)
    {
        cout << 0 << endl;
        return ;
    }
    if(d[1]==1 || d[n]==n)
    {
        cout << 1 << endl;
        return;
    }
    ll ans = 2;
    if(d[1]==n && d[n]==1) ans++;
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
