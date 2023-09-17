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
    double d, h;
    ll n,i,j,k;
    cin >> n >> d >> h;

    double y[n+5];
    for(i=0; i<n; i++)   cin >> y[i];
    y[n] = 1e18;
    double ans = 0;
    for(i=n-1; i>=0; i--)
    {
        ans += 0.5*d*h;
        double over = y[i+1]-y[i];
        if(over>h)   over = 0.0;
        else   over = h-over;
        double cutlen = d*over/h;
        ans -= 0.5*cutlen*over;
    }
    cout <<fixed<<setprecision(8)<<ans<<endl;

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
