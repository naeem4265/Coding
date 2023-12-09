#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e5+5;
const ll Mod = 1e9+7;
using namespace std;
ll dp[105][limit];
ll n,w[105],v[105],W;

ll rec(ll pos, ll value)
{
    if(value==0)   return 0;
    if(pos==-1 || value<0)  return 1e15;
    if(dp[pos][value]!=-1)   return dp[pos][value];
    return dp[pos][value] = min(rec(pos-1, value), w[pos]+rec(pos-1, value-v[pos]));
}

void Please_AC(ll tt)
{
    ll i,j,m,k,q;
    cin >> n >> W;
    for(i=1; i<=n; i++)
    {
        cin >> w[i] >> v[i];
    }
    memset(dp, -1, sizeof(dp));
    for(i=limit; i>=0; i--)
    {
        if(W>=rec(n, i))
        {
            cout  <<i<<endl;
            return;
        }
    }

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

