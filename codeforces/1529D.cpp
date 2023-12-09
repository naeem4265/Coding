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

//ll rec(ll ct)
//{
//    if(ct==2) return 1;
//    if(dp[ct]!=-1) return dp[ct];
//    for(ll i=ct-2; i>=ct/2; i-=2)
//    {
//        dp[ct] = rec(i);
//    }
//}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5];
    d[0] = 0;
    d[1] = 1;
    ll T[n+5];
    T[0] = 0;
    T[1] = 1;
    for(i=2; i<=n; i++)
    {
        if(i&1)
        {
            d[i] = (T[i-1]+2)%Mod;
            T[i] = (T[i-1]+d[i])%Mod;
        }
        else
        {
            d[i] = (T[i-1]+1)%Mod;
            d[i] = (d[i]+2+T[i/2-1]*T[i/2-1])%Mod;
            T[i] = (T[i-1]+d[i])%Mod;
        }
    }
    cout << d[n] << endl;
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
