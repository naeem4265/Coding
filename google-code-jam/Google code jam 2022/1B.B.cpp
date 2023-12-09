#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1008
using namespace std;
ll dp[limit][3];
ll d[limit][105];
ll n,m;

ll rec(ll pos, ll st)
{
    if(dp[pos][st]!=-1)
        return dp[pos][st];
    if(pos==n)
        return 0;
    ll x;
    if(st==1)
        x = d[pos-1][m-1];
    else
        x = d[pos-1][0];
    dp[pos][st] = min(abs(x-d[pos][0])+d[pos][m-1]-d[pos][0]+rec(pos+1,1),abs(x-d[pos][m-1])+d[pos][m-1]-d[pos][0]+rec(pos+1,0));
    //cout <<pos<<" "<<st<<" "<<dp[pos][st]<<endl;
    return dp[pos][st];
}

void solve(ll tt)
{
    cin >> n >> m;
    ll i,j;
    memset(dp, -1, sizeof(dp));
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> d[i][j];
            dp[i][j] = -1;
        }
        sort(d[i], d[i]+m);
    }
    ll temp;
    temp = d[0][m-1]+rec(1,1);

    cout <<"Case #"<<tt<<": ";
    cout << temp <<endl;
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
