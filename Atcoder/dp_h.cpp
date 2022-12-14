#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e3+5;
const ll Mod = 1e9+7;
using namespace std;
ll h,w,dp[limit][limit];
string s[limit];

ll rec(ll i, ll j)
{
    if(i==(h-1) && j==(w-1))   return 1;
    if(dp[i][j] != -1) return dp[i][j];
    dp[i][j] = 0;
    if(i+1<h && s[i+1][j]=='.')    dp[i][j] = (dp[i][j]+rec(i+1, j))%Mod;
    if(j+1<w && s[i][j+1]=='.')    dp[i][j] = (dp[i][j]+rec(i, j+1))%Mod;
    return dp[i][j];
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> h >> w;
    for(i=0; i<h; i++)   cin >> s[i];
    memset(dp, -1, sizeof(dp));

    cout << rec(0, 0) <<endl;

    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

