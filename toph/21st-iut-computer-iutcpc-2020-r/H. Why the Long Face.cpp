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
    ll i;

    double d,a,b;
    cin >> d >> a >> b;

    double m,l=0.0,r=d,x,y,z,cost;
    cost = (double)inf;

    for(i=0; i<10000; i++)
    {
        m = (l+r)/2.00;

        x = sqrt(m*m+(b*b))*2.00+sqrt((d-m)*(d-m)+a*a);
        y = sqrt(l*l+(b*b))*2.00+sqrt((d-l)*(d-l)+a*a);
        z = sqrt(r*r+(b*b))*2.00+sqrt((d-r)*(d-r)+a*a);
                //cout <<l<<" "<<r<<" "<<m<<" "<<x<<" "<<y<<" "<<z<<endl;
        if(cost > x)
        {
            cost = x;
        }
        if(cost > y)
        {
            r = m;
        }
        else if(cost > z)
        {
            l = m;
        }
        else if( y < x )
            r = m;
        else if(z < x)
            l = m;
        else if(abs(x-y) < abs(x-z))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    m = sqrt(m*m+(b*b))+sqrt((d-m)*(d-m)+a*a);

    cout <<fixed<<setprecision(15)<< m << endl;
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
