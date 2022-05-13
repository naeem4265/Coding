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
    vector<pair<ll,ll > >v;
    for(i=1; i<=n; i++)
    {
        cin >> m;
        v.pb(mp(m,i));
    }
    sort(v.begin(),v.end());
    ll l=-1,r=1;
    ll x[n+5];
    x[0] = 0;
    ll ans = 0;
    for(i=n-1; i>=0; i--)
    {   //cout <<v[i].first<<" "<<v[i].second<<" "<<ans <<endl;
        if(i&1)
        {
            x[v[i].second] = l;
            ans += 2LL*(-l)*v[i].first;
            l--;
        }
        else
        {
            x[v[i].second] = r;
            ans += 2LL*r*v[i].first;
            r++;
        }
    }
    cout << ans <<endl;
    for(i=0; i<=n; i++)
        cout <<x[i]<<" ";
    cout <<endl;
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
