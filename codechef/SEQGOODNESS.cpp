#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2e5+5;
const ll Mod = 1e9+7;
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
    if(r==0)  return  1;
    if(r>n)   return 0;
    ll ans = ((fact[n] * factorialNumInverse[r])
              % Mod * factorialNumInverse[n - r])
             % Mod;
    return ans;
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

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5];
    for(i=0;  i<n;  i++){
        cin  >>  d[i];
    }
    sort(d,  d+n);

    ll  ans  =  0,ct=0;
    for(i=0,j=0; i<n; i++)
    {
        ans = (ans+ (nCrr(i,  d[i]-1)*bigmod(2LL, n-i-1))%Mod)%Mod;
    }
    cout  <<  ans <<endl;
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    InverseofNumber();
    InverseofFactorial();
    factorial();

    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

