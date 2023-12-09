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

///nPr O(r)
ll nPr(ll n,ll r)
{
    if(r>n)   return 0;
    ll ans=1;
    for(ll i=n,j=0; j<r; i--,j++)
        ans = (ans*i)%Mod;
    return ans;
}

///nCr O(n*r)
ll ncr[2000][2000];
ll nCr(ll n, ll r)
{
    if(r>n)  return 0;
    if(n==r) return 1;
    if(r==1) return n;
    if(ncr[n][r]) return ncr[n][r];
    return ncr[n][r] = (nCr(n-1,r-1)+nCr(n-1,r))%Mod;
}

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
    if(r>n)   return 0;
    ll ans = ((fact[n] * factorialNumInverse[r])
              % Mod * factorialNumInverse[n - r])
             % Mod;
    return ans;
}

int  main()
{
//    Fast
//    Freed
//    Fout
    InverseofNumber();
    InverseofFactorial();
    factorial();
    ll n,r;
    cin >> n >> r;
    cout <<nCr(n,r)<<endl;
    cout <<nCrr(n,r)<<endl;
    return 0;
}

