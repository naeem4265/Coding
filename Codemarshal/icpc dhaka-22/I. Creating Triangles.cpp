#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ll ans = -1;
    scanf("%lld %lld", &k, &n);
    m = pow(2LL, n+2);
    if(k>m)
    {
        printf("%lld\n", ans);
        return;
    }
    ll cnt = 0;
    for(i=54; i>=2; i--)
    {
        j = 1LL<<i;      //printf("%lld %lld\n",j,k);
        if(k>j)
        {
            k -= j;
            cnt++;
        }
    }
    if(k==4LL)
        ans = 4LL*pow(2LL,cnt);
    else if(k==3LL)
        ans = 2LL*pow(2LL,cnt);
    else if(k==2LL)
        ans = 2LL*pow(2LL,cnt);
    else
        ans = 1LL*pow(2LL,cnt);

    printf("%lld\n", ans);
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
    {
        printf("Case %lld: ",t);
        Please_AC(t);
    }
    return 0;
}

