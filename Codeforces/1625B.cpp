#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
vector<pair<ll, ll> > v;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    v.clear();
    for(i=0; i<n; i++)
    {
        ll d;
        cin >> d;
        v.pb({d,i});
    }
    sort(v.begin(),v.end());
    ll ans = -1;
    for(i=1; i<n; i++)
    {
        if(v[i-1].first!=v[i].first) continue;
        ans = max(ans, min(v[i-1].second,v[i].second)+min(n-v[i-1].second,n-v[i].second));
    }
    cout << ans <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
