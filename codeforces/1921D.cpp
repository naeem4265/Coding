#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> m;
    ll a[n+5], b[m+5];
    for( i=0; i<n; i++ )   cin >> a[i];
    for( i=0; i<m; i++ )   cin >> b[i];
    sort( a, a+n );
    sort( b, b+m );
    ll ans = 0, csumforward[n+5] = {0}, csumbackward[n+5] = {0};
    for( i=1; i<=n; i++) {
        csumforward[i] = csumforward[i-1] + abs( a[n-i] - b[i-1]);
        csumbackward[i] = csumbackward[i-1] + abs( a[i-1] - b[m-i]);
    }
    for(i=0; i<=n; i++ ) {
        ans = max( ans, csumforward[i] + csumbackward[n-i] );
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
