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
ll D[72][72];
ll dp[72][72][36][72];
ll n,m,k,mx;

ll rec(ll r,ll c,ll ct,ll rem)
{     //cout <<r<<" called "<<c<<" "<<ct<<" "<<rem<<endl;
    if(r==n)
    {
        if(rem==0)
            dp[r][c][ct][rem] = 0;
        else
            dp[r][c][ct][rem] = -Mod;
        return dp[r][c][ct][rem];
    }

    if(dp[r][c][ct][rem]!=-1) return dp[r][c][ct][rem];
    ll x,y=-Mod;

    if(c==m-1)
    {
        if(ct<(m/2))
            y = D[r][c]+rec(r+1,0,0,(rem+D[r][c])%k);
        x = rec(r+1,0,0,rem);
    }
    else
    {
        if(ct<(m/2))
            y = D[r][c]+rec(r,c+1,ct+1,(rem+D[r][c])%k);
        x = rec(r,c+1,ct,rem);
    }
    mx = max(mx,max(x,y));    //cout <<r<<" "<<c<<" "<<ct<<' '<<rem<<" "<<x<<" "<<y<<" "<<mx<<endl;
    return dp[r][c][ct][rem] = max(x,y);
}
void solve(int t)
{
    ll i,j;
    memset(dp,-1,sizeof(dp));
    cin >> n >> m >> k;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> D[i][j];
        }
    }
    rec(0,0,0,0);
    cout <<mx<<endl;

    return ;
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

