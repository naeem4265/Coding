#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll u[n+5];
    for(i=1; i<=n; i++)
        cin >> u[i];

    vector<ll> v[n+5];
    for(i=1; i<=n; i++)
    {
        ll a;
        cin >> a;
        v[u[i]].pb(a);
    }
    ll ans[n+5];
    memset(ans,0,sizeof(ans));

    for(i=0; i<n+5; i++) v[i].pb(0);
    for(i=0; i<n+5; i++) sort(v[i].begin(),v[i].end());
    //for(i=0; i<n+5; i++) reverse(v[i].begin(),v[i].end());
    for(i=1; i<=n; i++)
    {
        ll sz = v[i].size()-1;
        for(j=sz-1; j>=0; j--)
        {
            v[i][j] += v[i][j+1];
        }
        for(j=1; j<=sz; j++)
        {
            ll x = 1+sz%j;
            ans[j] += v[i][x];
        }
    }
    for(i=1; i<=n; i++)
    {
        cout << ans[i] <<" ";
    }
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
/*
4
7
1 2 1 2 1 2 1
6 8 3 1 5 1 5
10
1 1 1 2 2 2 2 3 3 3
3435 3014 2241 2233 2893 2102 2286 2175 1961 2567
6
3 3 3 3 3 3
5 9 6 7 9 7
1
1
3083
*/
