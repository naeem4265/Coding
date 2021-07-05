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
#define limit 3008
using namespace std;
ll dp[limit][limit],n,d[limit];

ll rec(ll pos,ll ct,ll sum)
{                         //cout << pos <<" "<<ct<<" "<<sum<<endl;
    if(pos==n)
    {
        if(sum)
            return 0;
        return 1;
    }
    if(dp[pos][ct]!=-1) return dp[pos][ct];

    ll x = rec(pos+1,ct,sum+d[pos]);
    ll y=0;
    if((sum+d[pos])%ct==0)
        y = rec(pos+1,ct+1,0);
                    // cout << pos <<" "<< ct<<" "<<sum<<" "<<x<<" "<< y << endl;
    return dp[pos][ct] = x+y;
}

void solve(ll t)
{
    ll i;
    memset(dp,-1,sizeof(dp));
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }

    cout << rec(0,1,0) << endl;
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
