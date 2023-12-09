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

///Factorial O(n)
ll fact(ll n)
{
    ll ans=1;
    for(ll i=2; i<=n; i++)
        ans = (ans*i)%Mod;
    return ans;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    if(n&1)
    {
        cout <<0<<endl;
        return ;
    }
    cout <<(fact(n/2)*fact(n/2))%Mod <<endl;


    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
