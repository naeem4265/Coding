#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void solve(ll tt)
{
    ll i,j,n,x;
    cin >> n >> x;
    ll d[n+5];
    vector<ll> v;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    ll ans = 0;
    sort(d,d+x);
    sort(d+x, d+n);
    ll ct = 1;
    for(i=0; i<n; i++)
    {
        vector<ll> :: iterator it = upper_bound(v.begin(), v.end(), d[i]);
        if(it==v.end())
            v.pb(d[i]);
        else
            v[it-v.begin()] = d[i];
    }
    cout << v.size() <<endl;
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
