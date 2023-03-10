#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 998244353;
using namespace std;
ll n,m,cnt[limit], divi=1;
ll d[4050];
ll dp[4050][2025];
vector<ll> prime;

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
ll fact[4050],fact_inv[4050];
ll csum[4050];

ll rec(ll pos, ll rem)
{
    if(rem==0)
    {
        ll temp = divi;
        temp = (temp*csum[pos])%Mod;  //cout <<pos<<" "<<rem<<" "<<fact[n]<<" "<<temp<<endl;
        return (fact[n]*temp)%Mod;
    }
    if(pos==m)   return 0;
    if(dp[pos][rem]!=-1)   return dp[pos][rem];

    dp[pos][rem] = ((fact_inv[cnt[prime[pos]]]*rec(pos+1, rem))%Mod+
        (fact_inv[cnt[prime[pos]]-1]*rec(pos+1, rem-1))%Mod)%Mod;

    return dp[pos][rem];
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n;

    for(i=0; i<2LL*n; i++)
    {
        cin >> d[i];
        cnt[d[i]]++;
    }
    sort(d, d+2*n);
    for(i=0; i<2LL*n; i++)
    {
        bool ok = 0;
        if(d[i]==1)  ok = 1;
        for(j=2; j*j<=d[i]; j++)
        {
            if(d[i]%j==0)
            {
                ok = 1;  break;
            }
        }
        if(i && d[i]==d[i-1])  continue;

        if(ok)
            divi = (divi*fact_inv[cnt[d[i]]])%Mod;
        else
        {
            prime.pb(d[i]);
        }
    }
    m = prime.size();
    csum[m] = 1;
    for(i=m-1; i>=0; i--)
    {
        csum[i] = (csum[i+1]*fact_inv[cnt[prime[i]]])%Mod;
    }
    memset(dp, -1, sizeof(dp));

    cout << rec(0, n) <<endl;
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1,i;
    fact[0] = 1;
    fact_inv[0] = 1;
    for(i=1; i<4050; i++)
    {
        fact[i] = (fact[i-1]*i)%Mod;
        fact_inv[i] = bigmod(fact[i], Mod-2)%Mod;
    }
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

