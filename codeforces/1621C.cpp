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
    ll i,j,k,n;
    cin >> n;
    ll ans[n+5];
    memset(ans,0,sizeof(ans));

    for(i=1; i<=n; i++)
    {
        if(ans[i])  continue;
        vector<ll> v;
        v.clear();
        while(1)
        {
            cout <<"? "<<i<<"\n";
            ll x;
            cin >> x;
            if(ans[x])  break;
            v.pb(x);
            ans[x] = -1;
        }
        ll sz = v.size();
        for(j=0; j<sz; j++)
        {
            ans[v[j]] = v[(j+1)%sz];
        }
    }
    cout <<"! ";
    for(i=1; i<=n; i++)
        cout <<ans[i]<<" ";
    cout <<endl;
    cout.flush();
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
