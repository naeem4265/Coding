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
    cin >> n >> k;
    ll a[n+5],b;
    vector<pair<ll,ll> > v;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> b;
        v.pb(mp(a[i],b));
    }
    sort(v.begin(),v.end());
    ll ans = k;
    for(i=0; i<n; i++)
    {
        if(ans<v[i].first)
        {
            cout << ans <<endl;
            return ;
        }
        ans += v[i].second;
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
