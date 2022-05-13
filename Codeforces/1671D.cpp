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
    ll i,j,n,m,k,x;
    cin >> n >> x;
    ll d[n+5];
    cin >> d[0];
    ll ans=0,mn = d[0], mx = d[0];
    for(i=1; i<n; i++)
    {
        cin >> d[i];
        if(d[i]<mn)   mn = d[i];
        if(d[i]>mx)   mx = d[i];
        ans += abs(d[i]-d[i-1]);
    }
    ans += min(min(d[0],d[n-1])-1, (mn-1)*2LL);
    ans += min(max(0LL,x-max(d[0],d[n-1])), max(0LL,x-mx)*2LL);
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
