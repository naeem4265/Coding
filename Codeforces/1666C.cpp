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

    vector<pair<ll,ll> > v;
    for(i=0; i<3; i++)
    {
        ll x,y;
        cin >> x >> y;
        v.pb({x,y});
    }
    sort(v.begin(), v.end());
    cout <<3<<endl;
    cout <<v[1].first<<" "<<min({v[0].second,v[1].second,v[2].second})<<" "<<v[1].first<<" "<<max({v[0].second,v[1].second,v[2].second})<<endl;
    cout <<v[0].first<<" "<<v[0].second<<" "<<v[1].first<<" "<<v[0].second<<endl;
    cout <<v[2].first<<" "<<v[2].second<<" "<<v[1].first<<" "<<v[2].second<<endl;

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
