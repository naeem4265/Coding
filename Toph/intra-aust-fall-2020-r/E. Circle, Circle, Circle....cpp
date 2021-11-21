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
    ll i,j,q=1000;

    double R,r,n;

    cin >> R >> r >> n;
    r = R-r;
    n = n*2.00;

    double mid, l=0.00,h=r/2.00, con= sin(360.00/n);
    double lombo,otibuj,vumi,thita;
    while(q--)
    {
        mid = (l+h)/2.0;
        lombo = mid;
        otibuj = R-mid;
        vumi = sqrt(otibuj*otibuj-lombo*lombo);
        thita = lombo/otibuj;
        if( thita > sin(con) )
            h = mid;
        else
            l = mid;
    }

    cout << lombo << endl;

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

