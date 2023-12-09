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
ll ans;
ll d[limit];
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

void cal(ll x,ll n)
{
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));

    ll ace = 0;
    for(ll i=0; i<n; i++)
    {
        if(d[i]&x)  ace++;
    }
    if(x==0)    ace = n;
    ans = (ans+bigmod(2LL, ace)-1+Mod)%Mod;   cout <<x<<" "<<ace<<" "<<ans<<endl;

    for(ll i=1; i<64; i*=2)
    {
        ll ct = 0;
        ll bad = 0;

        if(i&x)   continue;
        for(ll j=0; j<n; j++)
        {        //cout <<j<<" hrere "<<d[j]<<" "<<x<<" "<<(d[j]&x)<<" "<<ct<<endl;
            if((d[j]&x)==0)   continue;
            if(d[j]&i)
            {
                ct++;
                if(vis[j])   bad++;
            }
        }
        ans = (ans-bigmod(2LL, ct)+bigmod(2LL, bad)+Mod)%Mod;        // cout <<x<<" "<<i<<" "<<ct<<" "<<bad<<" "<<ans<<endl;
        for(ll j=0; j<n; j++)
        {
            if((d[j]&x)==0)   continue;
            if(d[j]&i)
            {
                vis[j] = 1;
            }
        }
    }
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> k;
    ans = 0;

    for(i=0; i<n; i++)   cin >> d[i];
    for(i=0; i<64; i++)
    {
        ll ct = __builtin_popcount(n);
        if(__builtin_popcount(i)==k)
        {
            cal(i, n);
        }
    }
    cout << ans <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

