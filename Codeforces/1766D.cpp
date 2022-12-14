#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const int limit = 3168;
const ll Mod = 1e9+7;
using namespace std;

bool vis[limit];
vector<ll> prime;

void seive()
{
    ll i,j;
    vis[0]=vis[1]=1;
    for(i=2; i<limit; i+=2)
    {
        vis[i] = 1;
    }
    prime.pb(2);
    for(i=3; i<limit; i+=2)
    {
        if(vis[i]) continue;
        prime.pb(i);
        for(j=i*i; j<limit; j += i*2LL)
        {
            vis[j] = 1;
        }
    }
}


void Please_AC(ll tt)
{
    ll x,y,n,i,j;
    scanf("%lld %lld", &x, &y);
    if((y-x)==1LL)
    {
        printf("-1\n");
        return;
    }
    else if(__gcd(x,y)>1)
    {
        printf("0\n");
        return;
    }
    else
    {
        n = y-x;
        ll ans = 1e18;
        for(j=0; prime[j]*prime[j]<=n; j++)
        {
            if(n%prime[j]==0)
            {
                while(n%prime[j]==0)   n/=prime[j];
                if(ans > (prime[j]-x%prime[j]))
                    ans = prime[j]-x%prime[j];
            }
        }
        if(n>1)
        {
            if(ans > (n-x%n))
                ans = n-x%n;
        }
        printf("%lld\n", ans);
    }

    return ;
}


int  main()
{
    //Fast
    ll t,tt=1;
    seive();       //cout << prime.size() <<endl;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

