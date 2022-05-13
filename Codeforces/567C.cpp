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

    cin >> n >> k;
    ll d[n+5];
    map<ll,ll>mymap,ct;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    ll ans = 0;
    for(i=n-1; i>=0; i--)
    {
        if(k==1 || d[i]==0)
        {
            ans += (mymap[d[i]]*(mymap[d[i]]-1))/2LL;
        }
        else
        {
            ans += (ct[d[i]*k]);
        }    // cout <<i<<" "<<ans<<" "<<d[i]<<" "<<mymap[d[i]]<<endl;
        mymap[d[i]]++;
        ct[d[i]] += mymap[d[i]*k];
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
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
