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
    ll i,j,n,m,k;
    string s;
    ll n2,e,e2,h2,h,a,b,c,ans = 1e18,x;
    cin >> n >> e >> h >> a >> b >> c;
    e2 = e; h2 = h;  x = 0;
    n2 = n;
    k = min(n,e/2);
    n -= k;
    e -= k*2;
    x += k*a;
    k = min(n,h/3);
    n -= k;
    h -= k*3;
    x += k*b;
    k = min(n,min(e,h));
    n -= k;
    e -= k;
    h -= k;
    x += k*c;
    if(n) x = 1e18;
    ans = min(ans,x);

    e = e2; h = h2;  x = 0;
    n = n2;
    k = min(n,e/2);
    n -= k;
    e -= k*2;
    x += k*a;
    k = min(n,min(e,h));
    n -= k;
    e -= k;
    h -= k;
    x += k*c;
    k = min(n,h/3);
    n -= k;
    h -= k*3;
    x += k*b;
    if(n) x = 1e18;
    ans = min(ans,x);

    e = e2; h = h2;  x = 0;
    n = n2;
    k = min(n,h/3);
    n -= k;
    h -= k*3;
    x += k*b;
    k = min(n,e/2);
    n -= k;
    e -= k*2;
    x += k*a;
    k = min(n,min(e,h));
    n -= k;
    e -= k;
    h -= k;
    x += k*c;
    if(n) x = 1e18;
    ans = min(ans,x);

    e = e2; h = h2;  x = 0;
    n = n2;
    k = min(n,h/3);
    n -= k;
    h -= k*3;
    x += k*b;
    k = min(n,min(e,h));
    n -= k;
    e -= k;
    h -= k;
    x += k*c;
    k = min(n,e/2);
    n -= k;
    e -= k*2;
    x += k*a;
    if(n) x = 1e18;
    ans = min(ans,x);

    e = e2; h = h2;  x = 0;
    n = n2;
    k = min(n,min(e,h));
    n -= k;
    e -= k;
    h -= k;
    x += k*c;
    k = min(n,e/2);
    n -= k;
    e -= k*2;
    x += k*a;
    k = min(n,h/3);
    n -= k;
    h -= k*3;
    x += k*b;
    if(n) x = 1e18;
    ans = min(ans,x);

    e = e2; h = h2;  x = 0;
    n = n2;
    k = min(n,min(e,h));
    n -= k;
    e -= k;
    h -= k;
    x += k*c;
    k = min(n,h/3);
    n -= k;
    h -= k*3;
    x += k*b;
    k = min(n,e/2);
    n -= k;
    e -= k*2;
    x += k*a;
    if(n) x = 1e18;
    ans = min(ans,x);

    if(ans>=1e18) ans = -1;
    cout <<ans<<endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
