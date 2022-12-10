#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+2;
const ll Mod = 1e9+7;
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
    prime.pb(2);
    for(ll j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}
ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}

vector<ll> divi[limit];
ll cnt[limit],cum[limit];

void Please_AC(ll tt)
{
    ll l,r;
    cin >> l >> r;
    cout << (cum[r]-cum[l-1]+Mod)%Mod <<endl;

    return ;
}


int  main()
{
    Fast
    ll t,tt=1,i,j;
    seive();
    ll sz = prime.size();
    for(i=0; i<sz; i++)
    {
    	for(j=prime[i]; j<limit; j+= prime[i])
    	{
    		divi[j].pb(prime[i]);
    	}
    }

    cum[0] = 0;
    cum[1] = 1;
    ll all = 1;
    for(i=2; i<limit; i++)
    {
    	ll num = i;
    	sz = divi[i].size();
    	for(j=0; j<sz; j++)
    	{
    		ll p = divi[i][j];
    		ll ct = 0;
    		while(num%p==0)
    		{
    			num /= p;
    			ct++;
    		}
    		all = (all*bigmod(cnt[p]+1LL, Mod-2LL))%Mod;
    		cnt[p] += ct;
    		all = (all*(cnt[p]+1))%Mod;
    	}
    	cum[i] = (cum[i-1]+all)%Mod;
    }


    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}