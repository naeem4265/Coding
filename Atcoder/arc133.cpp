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
#define limit 200008
using namespace std;
ll a[limit],b[limit],dp[limit];

ll rec(ll p1, ll p2)
{
    if(p2==n) return 0;
    ll x = rec(p1+1,p2),y=0,i;
    for(i=p2; i<n; i++)
    {
        if(b[i]%a[p1]==0)
        {
            y = rec(p1+1, i+1);
            break;
        }
    }
    return dp[]
}

void solve(ll tt)
{
    ll i;

    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
        scanf("%d", &b[i]);
    printf("%d\n", rec(0,0));
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
