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
    ll i,j,n,m,k,q;
    string s;
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll g = __gcd(a,b);
    a /= g;
    b /= g;
    g = __gcd(c,d);
    c /= g;
    d /= g;   // cout <<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    if(a==c && b==d)
    {
        cout <<0<<endl;
        return ;
    }
    if(a==0 || c==0)
    {
        cout <<1<<endl;
        return ;
    }
    a = a*d;
    b = b*c;
    if(a%b==0 || b%a==0)
    {
        cout <<1<<endl;
        return ;
    }
    cout <<2<<endl;

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
        Please_AC(t);
    return 0;
}
