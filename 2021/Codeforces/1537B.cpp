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
    string s;
    ll x,y;
    cin >> n >> m >> x >> y;
    ll d1 = abs(x-1)+abs(y-1);
    ll d2 = abs(x-1)+abs(y-m);
    ll d3 = abs(x-n)+abs(y-m);
    ll d4 = abs(x-n)+abs(y-1);
    if( (d1+d3)>=(d2+d4))
    {
        cout <<"1 1 "<<n<<" "<<m<<endl;
    }
    else
    {
        cout <<"1 "<<m<<" "<<n<<" 1"<<endl;
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
