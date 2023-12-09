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
string s[505];
ll n,m;
bool dp[505][505][505];

bool check(ll r,ll c,ll k)
{
    if(c-k<0 || c+k>=m || r-k<0)
        return 0;
    if(s[r][c-k]=='.' || s[r][c+k]=='.') return 0;
    return 1;
}

void solve(ll t)
{
    ll i,j,k;
    cin >> n >> m;
    for(i=0; i<n; i++)
        cin >> s[i];
    for(i=0; i<n+5; i++)
    {
        for(j=0; j<m+5; j++)
        {
            for(k=0; k<=504; k++)
                dp[i][j][k]=0;
        }
    }
    ll ct=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='*')
            {
                ct++;
                dp[i][j][0]=1;       //cout <<i<<" "<<j<<" "<<k<<" "<<ct<<endl;
                for(k=1; k<=500; k++)
                {                        //cout <<dp[i-k][j][k]<<endl;
                    if(check(i,j,k) && dp[i-1][j][k-1])
                    {
                        dp[i][j][k]=1;
                        ct++;              //cout <<i<<" "<<j<<" "<<k<<" dn "<<ct<<endl;
                    }
                    else
                        break;
                }
            }
        }
    }
    cout <<ct<<endl;
    return ;
}
int  main()
{    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

