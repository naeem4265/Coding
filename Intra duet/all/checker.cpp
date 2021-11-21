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
    ll i,j,n,m;
    string s;
    cin >> n;
    map<ll,ll> mymap;
    ll ans=0,l=0;
    ll d[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        for(j=i-1; j>l; j--)
        {
            if(d[i]==d[j]) break;
        }
        l = j;
        ans = max(ans, i-l);
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
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
