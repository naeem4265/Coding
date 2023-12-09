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
#define limit 100008
using namespace std;

vector<ll> ctr[limit],ctc[limit];

void solve(ll tt)
{
    ll i,j,n,m,k;
    cin >> n >> m;
    ll d;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> d;
            ctr[d].pb(i);
            ctc[d].pb(j);
        }
    }
    ll ct = 1;
    ll ans = 0;
    for(i=1; i<limit; i++)
    {
        ll sz = ctr[i].size();
        if(sz)
            sort(ctr[i].begin(), ctr[i].end());
        for(j=0,k=sz-1; j<sz; j++,k--)
        {
            ans += (j*ctr[i][j]);
            ans -= (k*ctr[i][j]);
        }

        sz = ctc[i].size();
        if(sz)
            sort(ctc[i].begin(), ctc[i].end());
        for(j=0,k=sz-1; j<sz; j++,k--)
        {
            ans += (j*ctc[i][j]);
            ans -= (k*ctc[i][j]);
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
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
