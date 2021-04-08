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

void solve(int t)
{
    int i,n,m,k;
    double x,y,r,d,j;
    cin >> x >> y >> r;
    x = abs(x);
    y = abs(y);
    ll ans = 0;
    j = ceil(y)-y;

    for(; j<=r; j+=1.00)
    {
        d = 2.0*sqrt(r*r-j*j);
        if(floor(x)==ceil(x))
        {
            ans++;
        }
        ans += floor(d);
        //cout <<setprecision(10)<<fixed<<j<<endl<<" "<<d<<" "<<ans<<endl;
    }
    j = y-floor(y);
    if(floor(y)==ceil(y)) j = 1;

    for(; j<=r; j+=1.00)
    {
        d = 2*sqrt(r*r-j*j);
        if(floor(x)==ceil(x))
        {
            ans++;
        }
        ans += floor(d);
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
