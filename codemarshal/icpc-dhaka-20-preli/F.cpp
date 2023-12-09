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

bool vis[limit];
vector<ll>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(ll i=4; i<limit; i+=2) vis[i] = 1;
    for(ll i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(ll j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2LL);
    for(ll j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}

ll total,ans,sz;
vector<ll> divisor;

void rec(ll pos, ll ct, ll product)
{
    if(pos==sz)
    {
        if(product<2) return;
        if(ct&1) ans = ans + total/product;
        else  ans = ans - total/product;
        return;
    }
    rec(pos+1,ct,product);
    rec(pos+1,ct+1,product*divisor[pos]);
}

void solve(ll t)
{
    ll i,j,n,m,k,a,b;
    scanf("%lld %lld %lld",&a,&b,&m);
    if(a>b) swap(a,b);
    n = b-a;
    divisor.clear();
    for(i=0; prime[i]*prime[i]<=n; i++)
    {
        bool ok = 0;
        while(n%prime[i]==0)
        {
            n /= prime[i];
            ok = 1;
        }
        if(ok)
        {
            divisor.pb(prime[i]);
        }
    }
    if(n>1LL) divisor.pb(n);
    sz = divisor.size();
    total = a+m;
    ans = 0;
    rec(0,0,1);
    ll total_divisor = ans;
    total = a-1;
    ans = 0;
    rec(0,0,1);    //cout << total_divisor<<" "<<ans<<endl;
    ans = m+1-(total_divisor-ans);

    if(a==b)
    {
        if(a==1) ans = 1;
        else ans = 0;
    }
    printf("Case %lld: ",t);
    printf("%lld\n",ans);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
