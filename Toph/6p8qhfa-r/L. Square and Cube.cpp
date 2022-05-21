#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void solve(ll tt)
{
    ll i,j,n,m,k,q;

    scanf("%d", &n);
    ll d[n+5];
    bool ok=1;
    for(i=0; i<2*n; i++)
    {
        scanf("%d", &d[i]);
        if(i&1 && ok && d[i]%6 && d[i-1]>1)
        {
            printf("Case %d: The number does not meet expectation.\n",tt);
            ok = 0;
        }
    }
    if(ok)
        printf("Case %d: The number is both square and cube.\n",tt);

    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
