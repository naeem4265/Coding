#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 100008
using namespace std;

///nCr O(1) when Mod is prime
ll fact[limit],factorialNumInverse[limit],naturalNumInverse[limit];
// Function to precompute inverse of numbers
void InverseofNumber()
{
    naturalNumInverse[0] = naturalNumInverse[1] = 1;
    for (int i = 2; i <limit; i++)
        naturalNumInverse[i] = naturalNumInverse[Mod % i] * (Mod - Mod / i) % Mod;
}
// Function to precompute inverse of factorials
void InverseofFactorial()
{
    factorialNumInverse[0] = factorialNumInverse[1] = 1;
    for (int i = 2; i <limit; i++)
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % Mod;
}
void factorial()
{
    fact[0] = 1;
    for (int i = 1; i <limit; i++) {
        fact[i] = (fact[i - 1] * i) % Mod;
    }
}
// Function to return nCr % p in O(1) time
ll nCrr(ll n, ll r)
{
    ll ans = ((fact[n] * factorialNumInverse[r])
              % Mod * factorialNumInverse[n - r])
             % Mod;
    return ans;
}

ll factzero[limit];
void factzeroSet(ll n, ll b)
{
    factzero[1] = 0;
    for(ll i=2; i<=n; i++)
    {
        ll ct=0, temp=i;
        while(temp%b==0)
        {
            ct = (ct+1)%Mod;
            temp/=b;
        }
        factzero[i] = (factzero[i-1]+ct)%Mod;
    }
}

ll zeroPowp(ll zero, ll p)
{
    return (zero*p)%Mod;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,b;
    scanf("%lld %lld", &n, &b);
    factzeroSet(n,b);
    ll ans = 0;
    for(i=1; i<=n; i++)
    {
        ll zero = factzero[i];
        ll p = nCrr(n-1,i-1);
        ans = (ans+zeroPowp(zero, p))%Mod;
    }
    printf("Case %lld: ",tt);
    printf("%lld\n", ans);

    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    InverseofNumber();
    InverseofFactorial();
    factorial();
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
