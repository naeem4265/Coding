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

ll dp[12][12], grid[12][12], n, m, ans;


void rec(ll x, ll y, ll mn) {
    if( grid[x][y] == 3 ) {
        ans = min( ans, mn);
        return;
    }
    if( dp[x][y] <= mn )   return;
    dp[x][y] = mn;

    for( ll i=0; i<n; i++ ) {
        if( grid[i][y] )
            rec( i, y, max(mn, abs(i-x)) );
    }
    if( y && grid[x][y-1] )    rec( x, y-1, mn );
    if( y< (m-1) && grid[x][y+1] )    rec( x, y+1, mn );  // cout <<x<<" "<<y<<" "<<dp[x][y]<<endl;
    return ;
}

void Please_AC(ll tt)
{
    ll i,j;

    cin >> n >> m;
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
           cin >> grid[i][j];
           dp[i][j] = 100000;
        }
    }
    ans = 100000;

    rec(n-1, 0, 0 );
    cout << ans  <<endl;


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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
