#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 998244353
#define limit 1000008
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

void solve(int t)
{
    ll i,j,n,m,k,sum=0;
    cin >> n ;
    ll D[2*n+5];
    for(i=0; i<2*n; i++)
    {
        cin >> D[i];
    }
    sort(D,D+2*n);
    for(i=0,j=2*n-1; i<n; i++,j--)
    {
        sum += abs(D[i]-D[j]);
    }
    ll x=1,y=1;
    for(i=2; i<=2*n; i++)
    {
        x = (x*i)%Mod;
        if(i==n)
            y = (x*x)%Mod;
    }
    sum = abs(sum);
    sum = (sum%Mod);
    cout <<((sum*x)%Mod*bigmod(y,Mod-2))%Mod<<endl;
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

