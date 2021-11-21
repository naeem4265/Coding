#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10000003
using namespace std;

ll sod[limit],ans[limit];
void SOD(ll n)
{
    ll i,j;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j+=i)
        {
            if(sod[j]>n) continue;
            sod[j] += i;
        }
    }

    for(i=n; i>0; i--)
    {
        ans[i] = -1;
    }
    for(i=n; i>0; i--)
    {
        if(sod[i]<=n)
            ans[sod[i]] = i;
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    scanf("%d", &n);
    printf("%d\n",ans[n]);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    SOD(limit-1);
    ll t,tt=1;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
