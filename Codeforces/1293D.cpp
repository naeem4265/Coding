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
    ll i,j,x0,y0,ax,ay,bx,by;
    cin >> x0 >> y0 >> ax >> ay >> bx >> by;
    ll sx,sy;
    cin >> sx >> sy >> t;
    ll x,y,cx,cy,mn=1e18;
    x = x0; y = y0;
    for(i=0; i<62; i++)
    {
        if((abs(x-sx)+abs(y-sy))<mn)
        {
            mn = abs(x-sx)+abs(y-sy);
            cx = x;
            cy = y;
        }
        x = ax*x+bx;
        y = ay*y+by;
        if(x<=0 || y<=0 || x>1e18 || y>1e18)
            break;
    }
    x = cx;
    y = cy;
    ll ct=0,temp=abs(cx-sx)+abs(cy-sy),tt=t;
    while(t>0)
    {          cout <<t<<" "<<ct<<" "<<x<<" "<<y<<" "<<sx<<" "<<sy<<endl;  cout <<abs(x-sx)+abs(y-sy)<<endl;
        if((t-(abs(x-sx)+abs(y-sy)))<0)
            break;
        ct++;
        t -= abs(x-sx)+abs(y-sy);
        sx = x;
        sy = y;
        if(x==x0 && y==y0)
            break;
        x = (x-bx)/ax;
        y = (y-by)/ay;
    }
    sx = cx;
    sy = cy;
    x = ax*cx+bx;
    y = ay*cy+by;
    if(x<=0 || y<=0 || x>1e18 || y>1e18 || t<=0 || ct<=0)
    {
        cout <<ct<<endl;
        return ;
    }

    tt = tt-t-temp;
    t -= tt;

    while(t>0)
    {               //cout <<t<<" "<<ct<<" "<<x<<" "<<y<<endl;
        if(t-(abs(x-sx)+abs(y-sy))<0)
            break;
        ct++;
        t -= abs(x-sx)+abs(y-sy);
        sx = x;
        sy = y;
        x = ax*x+bx;
        y = ay*y+by;
        if(x<=0 || y<=0 || x>1e18 || y>1e18)
            break;
    }
    cout <<ct<<endl;
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


