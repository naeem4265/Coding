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
    pair<ll,ll>d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> m;
        d[i].first=m;
        d[i].second=i;
    }
    sort(d,d+n);
    ll ans = k/n;
    k -= ans*n;
    ll out[n+5];
    for(i=0; i<n; i++)
    {
        if(k)
            out[d[i].second] = ans+1,k--;
        else
            out[d[i].second] = ans;
    }
    for(i=0; i<n; i++)
        cout <<out[i]<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
