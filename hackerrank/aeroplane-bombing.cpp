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

ll grid[12][6];

ll rec(ll r, ll c, bool bomb, ll effect) {
    if( r < 0 )    return 0;

    ll mx = 0;
    if( grid[r][c]==2 ) {
        if( bomb ) {
            bomb = 0;
            effect = 5;
        } else if( effect <=0 )   return 0;
    }
    for(ll i=-1; i<=1; i++ ) {
        if( (c+i)<1 || (c+i)>5 )  continue;
        mx = max( mx, rec( r-1, c+i, bomb, effect-1) );
    }
    if( grid[r][c] == 1 )  mx++;
    return mx;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    for(i=0; i<n; i++) {
        for(j=1; j<=5; j++)   cin >> grid[i][j];
    }
    grid[n][3] = 0;
    cout <<"#"<<tt<<" "<< rec(n, 3, 1, 0) <<endl ;

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
