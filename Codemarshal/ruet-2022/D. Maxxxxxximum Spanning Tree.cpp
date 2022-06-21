#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll pr[limit];
ll Find(ll u)
{
    if(pr[u]==u)
        return u;
    return pr[u] = Find(pr[u]);
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    scanf("%lld", &n);
    for(i=0; i<=n; i++)
        pr[i] = i;

    ll ans = 0;
    for(i=n; i>1; i--)
    {
        for(j=i+i; j<=n; j+=i)
        {
            if(pr[Find(i)]!=pr[Find(j)])
            {
                ans += i;
                pr[Find(i)] = Find(j);
            }
        }
    }
    for(i=2; i<=n; i++)
    {
        if(pr[Find(i)]==i)
            ans++;
    }
    printf("Case %lld: %lld\n",tt, ans);
    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
