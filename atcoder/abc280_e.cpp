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

void Please_AC(ll tt)
{
    ll i,j,n,m,k,p,q;
    cin >> n >> p;
    q = 100-p;
    ll x = bigmod(100LL, Mod-2);
    ll t0=0, t1=0, tn=0;
    for(i=1; i<=n; i++)
    {
    	tn = (((p*t0+q*t1)%Mod)*x+1)%Mod;
    	t0 = t1;
    	t1 = tn;
    }
    cout << tn <<endl;

    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}