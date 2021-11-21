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
#define limit 1000008
using namespace std;


ll forwardhashing(ll n,ll base, ll A[],ll mod)
{
    ll hsh = 0;
    for(ll i=1; i<n; i++)
    {
        hsh = ((hsh*base)+A[i])%mod;     //cout <<i<<" "<<A[i]<<" "<<hsh<<endl;
    }
    return hsh;
}

void cumforwardhashing(ll n,ll base,ll mod,ll A[],ll cum[])
{
    cum[0] = 0;
    for(ll i=1; i<n; i++)
    {
        cum[i] = ((cum[i-1]*base)+A[i])%mod; //cout <<i<<" "<<A[i]<<" "<<cum[i]<<endl;
    }
}

ll bigmod(ll b,ll p,ll mod)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%mod;
        b = (b*b)%mod;
        p = p/2;
    }
    return ans;
}

ll A[limit],B[limit],C[limit],D[limit];

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;
    for(i=0; i<n; i++)
        cin >> A[i];

    for(i=n-1; i>0; i--)
    {
        A[i] -= A[i-1];
        A[i] += Mod;
    }

    for(i=0; i<m; i++)
        cin >> B[i];

    for(i=m-1; i>0; i--)
    {
        B[i] -= B[i-1];
        B[i] += Mod;
    }

    if(m==1)
    {
        cout << n << endl;
        return ;
    }

    ll E,F;

    cumforwardhashing(n,27LL,998244353LL,A,C);
    cumforwardhashing(n,31LL,998244353LL,A,D);


    E = forwardhashing(m,27LL,B,998244353LL);
    F = forwardhashing(m,31LL,B,998244353LL);       //cout << E<<" "<<F<<endl;

    ll ct=0;
    ll z = bigmod(27LL, m-1, 998244353LL);
    ll zz = bigmod(31LL, m-1, 998244353LL);
                                   //cout <<z <<" "<<zz<<endl;
    for(i=m-1; i<n; i++)
    {
        ll x,y;
        x = (C[i] - (C[i-m+1]*z)%998244353 + 998244353LL)%998244353;
        y = (D[i] - (D[i-m+1]*zz)%998244353LL + 998244353LL)%998244353LL;  //cout <<i<<" "<<x<<" "<<y<<" paici\n";
        if(x==E && y==F) ct++;
    }
    cout << ct << endl;
    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
