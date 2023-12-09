#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 40008
using namespace std;
ll dp[limit];

vector<ll> p;

bool palin(string s)
{
    ll i=0,j;
    for(i=0,j=s.size()-1; i<j; i++,j--)
    {
        if(s[i]!=s[j])  return 0;
    }
    return 1;
}

ll rec(ll x)
{       //cout <<x<<endl;
    if(dp[x]!=-1)
        return dp[x];

    dp[x] = 0;
    for(ll i=0; p[i]<=x; i++)
    {
        if(p[i]>(x-p[i]))  continue;
        dp[x] = (dp[x]+rec(x-p[i]))%Mod;
    }
    return dp[x];
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    cout << rec(n) <<endl;


    return ;
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    dp[0] = 1;
    for(t=1; t<limit; t++)
    {
        string s;
        s = to_string(t);
        if(palin(s))
            p.pb(t);
    }
    memset(dp, -1, sizeof(dp));
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
