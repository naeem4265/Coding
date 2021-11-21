#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1008
using namespace std;
vector<ll> coin;
ll dp[limit];
ll Pow(ll b,ll p)
{
    ll z;
    if(p==0) return 1;
    z = Pow(b,p/2);
    z = z*z;
    if(p&1)
        z = z*b;
    return z;
}
void solve(int t)
{
    ll i,j,n,x,m,ct=0;
    cin >> x >> n;
    for(i=0; i<33; i++)
        coin.pb(Pow(i,n));
    dp[0]=1;
    for(i=0; i<33; i++)
    {
        for(j=x; j>0; j--)
            if(j>=coin[i] && dp[j-coin[i]])
                dp[j]=1;

    }
    cout <<dp[x]<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}



