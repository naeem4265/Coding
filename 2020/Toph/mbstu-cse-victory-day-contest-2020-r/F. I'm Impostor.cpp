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
ll F[limit];

void fact()
{
    F[0] = 1LL;
    F[1] = 1LL;
    for(ll i=2; i<limit; i++)
        F[i] = (F[i-1]*i)%Mod;
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

void solve(ll tc)
{
    ll i,j,n,m,k,r;
    cin >> n >> r;
    m = (F[r]*F[n-r])%Mod;
    m = (F[n]*bigmod(m,Mod-2))%Mod;
    m = (m+Mod)%Mod;

    cout <<(m*(m-1))%Mod<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    fact();

    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

