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
ll fac[20],pw[50];

ll P(ll s)
{
    if(s<0)   return Mod;
    if(s==0)   return 0LL;
    if( s==1 || s==2)  return 1LL;
    ll i;
    for(i=42; i>0; i--)
    {
        if(s>=pw[i])   break;
    }
    if((s-pw[i])>pw[i])   return Mod;
    return 1+P(s-pw[i]);
}


ll F(ll pos, ll ct, ll s)
{
    if(pos==15LL)
    {
        return ct+P(s);
    }
    return min(F(pos+1,ct+1, s-fac[pos]), F(pos+1, ct, s));
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    scanf("%lld", &n);
    m = F(3, 0, n);
    if(m>=Mod)
        printf("-1\n");
    else
        printf("%lld\n", m);
    return ;
}

int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    fac[0] = 1;
    for(ll i=1; i<20; i++)
        fac[i] = fac[i-1]*i;
    pw[0] = 1;
    for(ll i=1; i<45; i++)
        pw[i] = pw[i-1]*2LL;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
