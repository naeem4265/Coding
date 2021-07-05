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

ll g(ll n)
{
    if(n&1)
        return g(n/2);
    else
        return n/2;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll h[n+5],ans=0;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&h[i]);
        h[i] = g(h[i]);
        ans = ans^h[i];
    }
    printf("Case %lld: ",t);
    if(ans)
        printf("Alice\n");
    else
        printf("Bob\n");
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
