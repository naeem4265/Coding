#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;
const ll N = 200005;

ll factorialNumInverse[limit];

// array to precompute inverse of 1! to N!
ll naturalNumInverse[limit];

// array to store factorial of first N numbers
ll fact[limit];

// Function to precompute inverse of numbers
void InverseofNumber(ll p)
{
    naturalNumInverse[0] = naturalNumInverse[1] = 1;
    for (int i = 2; i <= N; i++)
        naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p;
}
// Function to precompute inverse of factorials
void InverseofFactorial(ll p)
{
    factorialNumInverse[0] = factorialNumInverse[1] = 1;

    // precompute inverse of natural numbers
    for (int i = 2; i <= N; i++)
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p;
}

// Function to calculate factorial of 1 to N
void factorial(ll p)
{
    fact[0] = 1;

    // precompute factorials
    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i - 1] * i) % p;
    }
}

// Function to return nCr % p in O(1) time
ll Binomial(ll N, ll R, ll p)
{
    // n C r = n!*inverse(r!)*inverse((n-r)!)
    ll ans = ((fact[N] * factorialNumInverse[R])
              % p * factorialNumInverse[N - R])
             % p;
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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;

    cin >> n >> k;
    ll ans=0;

    if(k==0)
    {
        cout << 1 << endl;
        return ;
    }

    for(i=0; i<=n; i+=2)
    {
        ans = ans+Binomial(n,i,Mod);    //cout <<i<<" "<<ans<<endl;
        ans = ans%Mod;
    }

    if( n&1 ) ans++;
    ans = ans%Mod;
    ans = bigmod(ans,k) ;
    cout << ans << endl;
    return ;
}

// Driver Code
int main()
{
    // Calling functions to precompute the
    // required arrays which will be required
    // to answer every query in O(1)
    ll p = Mod;
    InverseofNumber(p);
    InverseofFactorial(p);
    factorial(p);

    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);

    return 0;
}

