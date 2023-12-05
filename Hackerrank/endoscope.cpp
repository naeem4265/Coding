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
ll grid[55][55], h, w;
bool vis[55][55];

ll fx[] = {-1, 0, 1, 0};
ll fy[] = {0, 1, 0, -1};

bool isValid(ll x, ll y) {
    if( x<0 || x>=h || y<0 || y>=w || vis[x][y] )  return 0;
}
bool checkup(ll x, ll y, ll xx, ll yy) {
    if(( grid[x][y]==1 || grid[x][y]==2 || grid[x][y]==4 || grid[x][y]==7 ) && ( grid[xx][yy]==1 || grid[xx][yy]==2 || grid[xx][yy]==5 || grid[xx][yy]==6))   return 1;
    return false;
}
bool checkdown(ll xx, ll yy, ll x, ll y) {
    if(( grid[x][y]==1 || grid[x][y]==2 || grid[x][y]==4 || grid[x][y]==7 ) && ( grid[xx][yy]==1 || grid[xx][yy]==2 || grid[xx][yy]==5 || grid[xx][yy]==6))   return 1;
    return false;
}
bool checkleft(ll x, ll y, ll xx, ll yy) {
    if(( grid[x][y]==1 || grid[x][y]==3 || grid[x][y]==6 || grid[x][y]==7 ) && ( grid[xx][yy]==1 || grid[xx][yy]==3 || grid[xx][yy]==4 || grid[xx][yy]==5))   return 1;
    return false;
}
bool checkright(ll xx, ll yy, ll x, ll y) {
    if(( grid[x][y]==1 || grid[x][y]==3 || grid[x][y]==6 || grid[x][y]==7 ) && ( grid[xx][yy]==1 || grid[xx][yy]==3 || grid[xx][yy]==4 || grid[xx][yy]==5))   return 1;
    return false;
}
ll ans = 0;

void rec(ll x, ll y, ll r ) {
    if( !r )  return;
    ans++;
    vis[x][y] = 1;
    for(ll i=0; i<4; i++ ) {
        if ( isValid(x+fx[i], y+fy[i] )==0)  continue;
        if( i==0 ) {
            if( checkup(x, y, x+fx[i], y+fy[i]))
                rec(x+fx[i], y+fy[i], r-1);
        } else if( i==1 ) {
            if( checkright(x, y, x+fx[i], y+fy[i]))
                rec(x+fx[i], y+fy[i], r-1);
        } else if( i==2 ) {
            if( checkdown(x, y, x+fx[i], y+fy[i]))
                rec(x+fx[i], y+fy[i], r-1);
        } else {
            if( checkleft(x, y, x+fx[i], y+fy[i]))
                rec(x+fx[i], y+fy[i], r-1);
        }
    }
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ll x,y,r;
    cin >> h >> w >> x >> y >> r ;
    ans = 0;
    for(i=0; i<h; i++) {
        for(j=0; j<w; j++) {
            cin >> grid[i][j];
        }
    }

    rec(x-1, y-1, r);
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
