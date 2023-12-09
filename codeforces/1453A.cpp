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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    d[0] = d[1];
    ll ans=0;
    ll mx = abs(d[2]-d[1]);
    mx = max(mx, abs(d[n]-d[n-1]));
    for(i=n; i>0; i--)
    {
        if(i>1 && i<n)
            mx = max(mx,abs(d[i+1]-d[i])+abs(d[i]-d[i-1])-abs(d[i+1]-d[i-1]));
        ans += abs(d[i]-d[i-1]);
    }
    cout << ans-mx <<endl;
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
