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
#define limit 200008
using namespace std;

ll dp[11][limit];

ll rec(ll d, ll ct)
{
    if(dp[d][ct]!= -1) return dp[d][ct];

    if(d==9)
        return dp[d][ct] = (rec(1,ct-1)+rec(0,ct-1))%Mod;
    else
        return dp[d][ct] = rec(d+1,ct-1);
}


void solve(ll tt)
{
    ll i,j,n,m,q;
    string s;
    cin >> s;
    cin >> m;

    n = s.size();

    ll ans = 0;
    for(i=0; i<n; i++)
    {
        ans += dp[s[i]-'0'][m];
    }
    cout << ans%Mod <<endl;

    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1,i,j;
    cin >> tt;
    memset(dp,-1,sizeof(dp));
    for(i=0; i<10; i++)
    {
        dp[i][0] = 1;
    }

    for(i=0; i<10; i++)
    {
        for(j=0; j<limit; j++)
            rec(i,j);
    }
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
