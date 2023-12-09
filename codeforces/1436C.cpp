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
ll lft=0,rght=0;

ll fact(ll n)
{
    ll ans=1;
    for(ll i=2; i<=n; i++)
        ans = (ans*i)%Mod;
    return ans;
}
ll nPr(ll n,ll r)
{
    ll ans=1;
    for(ll i=n,j=0; j<r; i--,j++)
        ans = (ans*i)%Mod;
    return ans;
}
void BS(ll n,ll pos)
{
    ll l=0,r=n,m;
    while(l<r)
    {
        m = (l+r)/2;
        if(m<=pos)
        {
            l = m+1;
            lft++;
        }
        else
        {
            r = m;
            rght++;
        }
    }
}
void solve(int t)
{
    ll i,j,n,m,k;
    cin >> n >> m >> k;
    BS(n,k);
    cout <<((fact(n-lft-rght)*nPr(m-1,lft-1)%Mod)*(nPr(n-m,rght)))%Mod<<endl;
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

