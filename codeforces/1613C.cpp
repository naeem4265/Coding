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
    ll h;
    cin >> n >> h;
    ll d[n+5];
    for(i=1; i<=n; i++)
        cin >> d[i];
    ll l=0,r=h;
    ll ans = h;
    while(l<=r)
    {
        m = (l+r)/2;    //cout <<ans<<" "<<m<<endl;
        ll ct = 0;
        for(i=1; i<n; i++)
        {
            ct += min(m,d[i+1]-d[i]);
        }
        ct += m;
        if(ct>=h)
        {
            ans = min(ans,m);
            r = m-1;
        }
        else
            l = m+1;
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
