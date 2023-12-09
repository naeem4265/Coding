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
ll fxx[] = {0, 1, 0, -1};
ll fyy[] = {1, 0, -1, 0};

ll cost[305][305], n, fx[105], fy[105], tx[105], ty[105], tc[105];
bool valid(ll x, ll y) {
    if( x<0 || y<0 || x>=305 || y>=305)   return 0;
    return 1;
}

void rec(ll x, ll y, ll c) {
    if( valid(x, y) == 0 || cost[x][y]<=c || c>=250)    return ;
    cost[x][y] = c;
    //if((x==120 && y==120 ) || (x==1 && y==2))    cout <<x<<" "<<y<<" "<<c<<endl;
    for(ll i=0; i<4; i++) {
        ll xx = x+fxx[i];
        ll yy = y+fyy[i];
        rec(xx, yy, c+1);
    }
    for( ll i=0; i<n; i++ ) {
        if( x== fx[i] && y == fy[i] )   {         //cout <<x<<" "<<y<<" "<<c<<" "<<tc[i]<<endl;
            if( valid(tx[i], ty[i]) ) rec(tx[i], ty[i], c+tc[i]);
        }
        if( x== tx[i] && y == ty[i] )   {
            if( valid(fx[i], fy[i]) ) rec(fx[i], fy[i], c+tc[i]);
        }
    }
}

void Please_AC(ll tt)
{
    ll i,j,m,k,q;
    for(i=0; i<305; i++)
        for(j=0; j<305; j++)   cost[i][j] = 1e9;

    cin >> n;
    ll sx, sy, dx, dy;
    cin >> sx >> sy >> dx >> dy;
    for( i=0; i<n; i++ ) {
        cin >> fx[i] >> fy[i] >> tx[i] >> ty[i] >> tc[i];
    }

    rec(sx, sy, 0);
    cout << cost[dx][dy] <<endl;



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
