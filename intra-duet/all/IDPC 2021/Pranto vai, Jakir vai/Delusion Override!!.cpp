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

void solve(ll t)
{
    ll i,j,n,m,k;
    ll x1,y1,x2,y2,x3,y3,area;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    area = x1*y2-x1*y3-x2*y1+x3*y1+x2*y3-x3*y2;

    if(area)
    {
        cout <<"NO\n";
    }
    else
    {
        cout <<"YES\n";
    }
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


