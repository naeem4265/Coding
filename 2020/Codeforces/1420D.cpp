#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 998244353
#define limit 300006
using namespace std;
ll fact[limit],modinv[limit];

ll bigmod(ll b,ll p)
{
    ll res = 1;
    while(p)
    {
        if(p&1) res = (res*b)%Mod;
        b = (b*b)%Mod;
        p = p>>1;
    }
    return res;
}

ll nCr(ll n,ll r)
{
    if(n<r) return 0;
    if(n==r) return 1;
    return (((fact[n]*modinv[r])%Mod)*(modinv[n-r]))%Mod;
}

void solve(int t)
{
    ll i,j,n,m,k;
    cin >> n >> k;

    fact[0] = 1;
    for(int i=1; i<limit; i++)
        fact[i] = (fact[i-1]*i)%Mod;
    for(i=0; i<n; i++)
        modinv[i] = bigmod(fact[i],Mod-2);

    ll L[n+5],R[n+5];
    for(i=0; i<n; i++)
    {
        cin >> L[i] >> R[i];
    }
    sort(L,L+n);
    sort(R,R+n);
    i = 0; j = 0;
    ll ct=0,ans=0;
    while( i<n && j<n )
    {
        while(R[j]<L[i])
        {
            ct--;
            j++;
        }      //cout <<ct<<" "<<k-1<<" "<<nCr(ct,k-1)<<endl;
        ans = (ans+nCr(ct,k-1))%Mod;
        ct++;
        i++;
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


