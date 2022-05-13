#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 3000008
using namespace std;


void solve(ll tt)
{
    ll i,j,n,m,k,q;
    ll a,b;
    scanf("%d %d", &a, &b);

    ll ans = b-a;
    for(i=a; i<=b; i++)
    {
        ans = min(ans, i-a+(i|b)-b+1);
    }
    for(i=b; i<=2*b; i++)
    {
        ans = min(ans, i-b+(i|a)-i+1);
    }
    printf("%d\n", ans);

    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
