#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    double s, m, r, R=100.00, x, h, a=1.00,b,c,d;
    double out_cos, R_h, h_out,surface_out, surface_total;
    cin >> s >> m >> r;
    s = abs(s);
    m = abs(m);

    out_cos = R/s;
    R_h = R*out_cos;
    h_out = R-R_h;
    surface_out = R*h_out;
    surface_total = R*2.00*R;

    if(m>=s)
    {
        cout <<fixed<<setprecision(8) << surface_out/surface_total <<endl;
        return;
    }

    b = -2.00*s*sqrt((s-m)*(s-m)-r*r)/(s-m);
    c = s*s-R*R;
    d = b*b-4.00*a*c;
    if( d < 0.00000000000000 )
    {
        cout <<fixed<<setprecision(8) << 0.0 <<endl;
        return;
    }

    double in_cos, h_in, surface_in, x1, x2;
    x1 = (-b+sqrt(d))/(2.00*a);
    x2 = (-b-sqrt(d))/(2.00*a);
    if(x1>(s-m) && x1<s)   x = x1;
    else if(x2>(s-m) && x2<s)   x = x2;
    else
    {
        cout <<fixed<<setprecision(9) << 0.0 <<endl;
        return;
    }
    in_cos = (R*R+s*s-x*x)/(2.00*R*s);
    R_h = R*in_cos;
    h_in = R-R_h;
    surface_in = R*h_in;


    cout <<fixed<<setprecision(10) << (surface_out-surface_in)/surface_total <<endl;

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
        cout <<"Case "<<t<<": ";
        Please_AC(t);
    }
    return 0;
}
