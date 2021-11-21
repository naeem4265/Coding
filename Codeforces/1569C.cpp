#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 998244353
#define limit 1000008
using namespace std;

ll fac[limit];
///Factorial O(n)
ll fact()
{
    fac[0]=1;
    for(ll i=1; i<limit; i++)
        fac[i] = (fac[i-1]*i)%Mod;
}

ll nPr(ll n,ll r)
{
    ll ans=1;
    for(ll i=n,j=0; j<r; i--,j++)
        ans = (ans*i)%Mod;
    return ans;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    sort(d,d+n);
    if(d[n-1]-1 > d[n-2])
    {
        cout <<"0\n";
        return ;
    }
    if( d[n-1]==d[n-2])
    {
        cout << fac[n] <<endl;
        return ;
    }

    ll ans = fac[n];
    ll ct = 0;

    for(i=0; i<n-1; i++)
    {
        if( d[i]+1 < d[n-1]) ct++;
    }
    ll ct2 = n-ct;

    ll cum[ct+5];
    cum[ct] = ct;
    cum[ct+1] = 1;
    for(i=ct-1; i>0; i--)
    {
        cum[i] = (cum[i+1]*i)%Mod;
    }
    cum[0] = cum[1];

    for(i=0; i<n; i++)
    {
        ll x = n-i-1;
        if( x > ct )
            continue;
        //ans = (ans-((nPr(ct,x)*nPr(i,i))%Mod)+Mod)%Mod;  //TLE
        ans = (ans-((cum[ct-x+1]*fac[i])%Mod)+Mod)%Mod;  //cout <<i<<" "<<ct<<" "<<x<<" "<<ans<<endl;
    }

    cout << ans << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    fact();
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
