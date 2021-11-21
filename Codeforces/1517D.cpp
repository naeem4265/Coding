#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 501
using namespace std;
ll fx[]={0,-1,0,+1};
ll fy[]={-1,0,+1,0};
ll dp[limit][limit][21];
ll costl[limit][limit],costr[limit][limit];
ll n,m;

ll rec(ll u,ll v,ll ct)
{         //cout <<u<<" "<<v<<" "<<ct<<endl;
    if(ct==0) return 0;
    if(dp[u][v][ct]!=-1) return dp[u][v][ct];
    ll temp = 1e18;
    ll x,y;
    x = u+0;
    y = v-1;
    if(x>0 && x<=n && y>0 && y<=m)
    {
        temp = min(temp,rec(x,y,ct-2)+2LL*costl[x][y]);
    }
    x = u+0;
    y = v+1;
    if(x>0 && x<=n && y>0 && y<=m)
    {
        temp = min(temp,rec(x,y,ct-2)+2LL*costl[u][v]);
    }
    x = u-1;
    y = v+0;
    if(x>0 && x<=n && y>0 && y<=m)
    {
        temp = min(temp,rec(x,y,ct-2)+2LL*costr[x][y]);
    }
    x = u+1;
    y = v+0;
    if(x>0 && x<=n && y>0 && y<=m)
    {
        temp = min(temp,rec(x,y,ct-2)+2LL*costr[u][v]);
    }       // cout <<u<<" "<<v<<" cost "<<temp<<endl;
    return dp[u][v][ct] = temp;
}

void solve(ll t)
{
    ll i,j,k;
    string s;
    cin >> n >> m >> k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<m; j++)
        {
            cin >> costl[i][j];
        }
    }
    for(i=1; i<n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> costr[i][j];
        }
    }
    if(k&1)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                cout <<"-1 ";
            cout <<endl;
        }
        return ;
    }
    memset(dp,-1,sizeof(dp));
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            rec(i,j,k);
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout <<dp[i][j][k]<<" ";
        }
        cout <<endl;
    }
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
