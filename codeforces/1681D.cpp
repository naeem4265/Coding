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
ll n,ans,pt;
map<ll,ll> mp;

void rec(ll x, ll cnt)
{
    if(mp[x]<=cnt && mp[x])  return ;
    mp[x] = cnt;


    bool vis[11];
    memset(vis, 0, sizeof(vis));

    ll ct = 0,i, t = x, d;
    while(x)
    {
        d = x%10;
        vis[d] = 1;
        x /= 10;
        ct++;
    }
    if(ct>=n)
    {
        if(ans>cnt) ans = cnt;
        return ;
    }

    for(i=9; i>1; i--)
    {
        if(vis[i])
        {
            rec(t*i, cnt+1);
        }
    }
}

void solve(ll tt)
{
    ll i,j,m,k,x;
    scanf("%lld %lld", &n, &x);
    if(x==1)
    {
        printf("-1\n");
        return ;
    }
    ans = limit;
    rec(x,0);
    if(ans >=limit)
    {
        ans = -1;
    }
    printf("%lld\n", ans);
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
