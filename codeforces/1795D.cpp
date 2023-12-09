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

ll fact[limit];

void Fact()
{
    fact[0] = 1;
    for(ll i=1; i<limit; i++)
        fact[i] = (fact[i-1]*i)%Mod;
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

ll d[limit];

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    ll ans = 1;
    for(i=2; i<n; i+=3)
    {
        ll ct=0, mn = min({d[i-2], d[i-1], d[i]});
        if(mn==d[i-2])   ct++;
        if(mn==d[i-1])   ct++;
        if(mn==d[i])   ct++;
        ans = (ans*ct)%Mod;
    }

    ll temp = ans;
    m = n/3;
    temp = (fact[m])%Mod;  // cout << temp <<endl;
    temp = (temp*bigmod(fact[m/2], Mod-2))%Mod;
    temp = (temp*bigmod(fact[m/2], Mod-2))%Mod;
    cout << (temp*ans)%Mod <<endl;

    return ;
}


int  main()
{
    Fast
    Fact();
    //Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

