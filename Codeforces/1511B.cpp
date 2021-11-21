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
    ll i,j,n,m,k;
    string s;
    ll x,y,a,b,c;
    cin >> x >> y >> c;
    n = pow(10LL,c-1);
    x = x-c;
    y = y-c;
    a = pow(10LL,x);
    b = pow(10LL,y);
    if(x==y)
    {
        a += 3;
        b += 7;
    }
    else
    {
        a += 7;
        b += 7;
    }

    cout << a*n <<" "<< b*n <<endl;
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
