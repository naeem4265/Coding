#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 998244353
#define limit 200008
using namespace std;
ll n;

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

ll rec(ll n)
{
    ll f0=0,f1=1,f=1,i;
    for(i=2; i<=n; i++)
    {
        f = (f0+f1)%Mod;
        f0 = f1;
        f1 = f;
    }
    return f;
}

void solve(int t)
{
    ll i,j,m,k,x,y;
    cin >> n ;
    m = rec(n);
    x = bigmod(2,n);
    y = bigmod(x,Mod-2);
    ll ans = (m*y)%Mod;
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

