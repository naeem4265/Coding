#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll n,dp[1005][1005];
string s[1005];

ll rec(ll x, ll y)
{
    if(x>n || y>n || s[x][y]=='*')  return 0;
    if(x==n && y==n)  return 1;
    if(dp[x][y]!=-1)    return dp[x][y];
    return dp[x][y]=(rec(x+1,y)+rec(x, y+1))%Mod;
}

void solve(ll tt)
{
    ll i,j;

    cin >> n;
    for(i=0; i<n; i++)
        cin >> s[i];
    n--;

    memset(dp, -1, sizeof(dp));
    cout << rec(0, 0) <<endl;


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
