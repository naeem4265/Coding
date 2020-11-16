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
    scanf("%lld",&n);
    ll D[n+5],sum=0;
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&D[i]);
        sum += D[i]*i;
    }
    if(sum&1)
    {
        printf("NO\n");
        return ;
    }
    ll ct[n+5];
    sum /=2;
    for(i=n; i>0; i--)
    {
        ct[i] = min(sum/i,D[i]);
        sum -= ct[i]*i;
    }
    printf("YES\n");
    for(i=1; i<=n; i++)
    {
        printf("%lld",ct[i]);
        if(i!=n)  printf(" ");
    }
    printf("\n");
    for(i=1; i<=n; i++)
    {
        printf("%lld",D[i]-ct[i]);
        if(i!=n)  printf(" ");
    }
    printf("\n");
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

