#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 998244353
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q,x = 1;

    cin >> n >> m >> k >> q;
    vector<pair<ll,ll> > v(q);
    set<ll> row,col;

    for(i=q-1; i>=0; i--)
    {
        ll r,c;
        cin >> r >> c;
        v[i].first = r;
        v[i].second = c;
    }
    bool visr[n+5], visc[m+5];
    memset(visr, 0, sizeof(visr));
    memset(visc, 0, sizeof(visc));

    ll ans = 1;
    for(i=0; i<q; i++)
    {
        if(col.size()<m && visr[v[i].first]==0)
        {
            ans = (ans*k)%Mod;
            row.insert(v[i].first);
            col.insert(v[i].second);
            visr[v[i].first] = 1;
            visc[v[i].second] = 1;
        }
        else if(row.size()<n && visc[v[i].second]==0)
        {
            ans = (ans*k)%Mod;
            row.insert(v[i].first);
            col.insert(v[i].second);
            visr[v[i].first] = 1;
            visc[v[i].second] = 1;
        }
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
