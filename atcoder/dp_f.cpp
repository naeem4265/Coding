#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 3e3+5;
const ll Mod = 1e9+7;
using namespace std;

string s,t;
ll n,m;
ll dp[limit][limit];

ll rec(ll i, ll j)
{
    if(i==n || j==m)  return 0;
    if(dp[i][j] != -1)    return dp[i][j];
    if(s[i]==t[j])
    {
        return dp[i][j] = 1+rec(i+1, j+1);
    }
    return dp[i][j] = max(rec(i+1, j), rec(i, j+1));
}

void path(ll i, ll j)
{
    if(i==n || j==m)  return;
    if(s[i]==t[j]){   cout <<s[i];   path(i+1, j+1); }
    else if(dp[i+1][j]>=dp[i][j+1])
        path(i+1, j);
    else
        path(i, j+1);
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> s >> t;
    n = s.size();
    m = t.size();
    memset(dp, -1, sizeof(dp));

    rec(0, 0);
    path(0, 0);


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

