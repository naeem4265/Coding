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
bool vis[15];
ll dx, dy, x[12], y[12];
ll n;

ll rec(ll sx, ll sy,ll taken) {        //cout <<sx<< " "<<sy<<" "<<taken<<endl;
    if( taken == n ) {
        return abs(sx-dx)+abs(sy-dy);
    }  
    ll mn = 1e9;  
    for(ll i=0; i<n; i++ ) {
        if( vis[i] )    continue;
        vis[i] = 1;
        ll temp = abs(sx-x[i]) + abs(sy-y[i]) + rec( x[i], y[i], taken+1);
        mn = min( mn, temp);
        vis[i] = 0;
    }
    return mn;
}

void Please_AC(ll tt)
{
    ll i,j,m,k,q;
    memset(vis, 0, sizeof(vis));

    ll sx, sy;
    cin >> n;
    cin >> sx >> sy >> dx >> dy;
    for(i=0; i<n; i++ )  cin >> x[i] >> y[i];

    cout <<"# "<<tt<<" "<< rec(sx, sy, 0) <<endl;



    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=10;
    // cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("# %lld ",t);
        Please_AC(t);
    }
    return 0;
}
