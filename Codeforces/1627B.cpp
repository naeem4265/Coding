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
    cin >> n >> m;
    vector<ll> ans;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            ll x = i-1+j-1;
            x = max(x, n-i+j-1);
            x = max(x, i-1+m-j);
            x = max(x, n-i+m-j);
            ans.pb(x);
        }
    }
    k = n*m;
    sort(ans.begin(),ans.end());
    for(i=0; i<k; i++)
        cout <<ans[i]<<" ";
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
