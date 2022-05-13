#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;
ll a,n,k;
ll d[limit];

bool check(ll m)
{
    ll i,t[m+5];
    t[0] = 0;
    t[m+1] = n+1;
    for(i=1; i<=m; i++)
        t[i] = d[i];
    sort(t, t+m+1);
    ll ct = 0;
    for(i=1; i<=m+1; i++)
    {
        ct += (t[i]-t[i-1])/(a+1);
    }
    if(ct>=k)
        return true;
    return false;
}

void solve(ll tt)
{
    ll i,j,m;
    cin >> n >> k >> a;
    cin >> m;
    for(i=1; i<=m; i++)   cin >> d[i];
    ll l=1,r=m;
    ll ans = -1;
    while(l<=r)
    {
        m = (l+r)/2;
        if(check(m))
        {
            l = m+1;
        }
        else
        {
            r = m-1;
            ans = m;
        }
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
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
