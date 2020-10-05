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
ll bigmod(ll x,ll y)
{
    ll z=1;
    while(y)
    {
        if(y&1) z = (z*x)%Mod;
        x = (x*x)%Mod;
        y /= 2;
    }
    return z;
}
void solve(int t)
{
    ll i,j,n,m,ans,mx;
    cin >> n;
    ans = (bigmod(10,n)-2*bigmod(9,n)+bigmod(8,n))%Mod;
    ans = (ans+Mod)%Mod;
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

