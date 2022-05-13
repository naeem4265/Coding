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
#define limit 200008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> m;
    ll d[limit];
    ll ans = 0;

        cin >> k;
        for(j=0; j<k; j++)
            cin >> d[j];
        ans = (d[k-1]-d[0])*m;

        cin >> k;
        for(j=0; j<k; j++)
            cin >> d[j];
        ans = max(ans,(d[k-1]-d[0])*m);

        cin >> k;
        for(j=0; j<k; j++)
            cin >> d[j];
        ans = max(ans,(d[k-1]-d[0])*n);

        cin >> k;
        for(j=0; j<k; j++)
            cin >> d[j];
        ans = max(ans,(d[k-1]-d[0])*n);
    cout << ans <<endl;
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
