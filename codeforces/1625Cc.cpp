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
#define limit 508
using namespace std;

ll n;
ll idx[limit];
ll speed[limit];
ll dp[limit][limit];

ll rec(ll pos, ll k)
{
    if(pos==n) return 0;

    if(dp[pos][k]!=-1)
        return dp[pos][k];

    ll x = 1e18,y=-1;
    for(ll i=pos+1; i<=n; i++)
    {
        if((i-pos-1)>k)    break;
        y = speed[pos]*(idx[i]-idx[pos])+rec(i,k-(i-pos-1));
        if(x>y)
            x = y;
    }
    dp[pos][k] = x;
        //cout <<pos<<" "<<k<<" "<<x<<" "<<y<<" "<<1<<" "<<dp[pos][k]<<endl;
    return dp[pos][k];
}

void solve(ll tt)
{
    ll i,j,k,q;
    string s;
    ll l;
    cin >> n >> l >> k;
    memset(dp,-1,sizeof(dp));

    idx[n] = l;
    for(i=0; i<n; i++)
    {
        cin >> idx[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> speed[i];
    }

    cout << rec(0,k) <<"\n";
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
