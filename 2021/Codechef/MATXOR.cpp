#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(int t)
{
    ll i,j,n,m,k;

    scanf("%d %d %d",&n,&m,&k);

    k++;
    ll ans = 0,nn = n+k;
    for(i=1+k,j=m+k; i<=nn; i++,j++)
    {
        if(i&1)
        {
            ans = (ans^i);
        }
        else
        {
            ans = (ans^j);
        }
    }
    if(n&1)
    {
        for(i=n+1+k,j=1; j<m; i++)
        {
            ans = (ans^i);
        }
    }

    printf("%d\n",ans);

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
