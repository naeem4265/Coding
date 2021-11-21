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
ll n;

void solve(ll t)
{
    ll i,j;
    double xi,yi,sxiyi=0.00,sxi=0.00,syi=0.00,sxixi=0.00,a1;
    double m=(double)n;
    for(i=0; i<n; i++)
    {
        scanf("%lf %lf", &xi, &yi);
        sxiyi += (xi*yi);
        sxi += xi;
        syi += yi;
        sxixi += (xi*xi);
    }
    a1 = (m*sxiyi-sxi*syi)/(m*sxixi-sxi*sxi);        //cout << a1<<endl;

    double x=sxi/m,y,newsyi;
    newsyi = a1*x;
    m = m+1.00;
    y = (newsyi*m)-syi;

    printf("Case %lld: %.3lf %.3lf\n",t,x,y);
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt;
    for(t=1; ; t++)
    {
        scanf("%lld", &n);
        if(n)
            solve(t);
        else
            return 0;
    }
}
