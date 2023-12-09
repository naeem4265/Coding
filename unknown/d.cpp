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
    ll a,b,c;
    cin >> a >> b >> c;
    ll ans = 0;
    n = min({a/3,b/2,c/2});
    ans = n*7LL;
    a -= n*3;
    b -= n*2;
    c -= n*2;
    if(a<=b && a<=c)
    {
        if(a==0)
            ans += min(b,1) + min(c,1);
        if(a==1)
            ans += 1+min(b,2)+min(c,2);
        if(a==2)
            ans += 6;
    }
    else if(b<=a && b<=c)
    {
        if(b==0)
            ans += max(min(a,2), min(c,2)+min(a,1));
        if(b==1 && b==2)
            ans += 1+ min(a,3)+2;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
