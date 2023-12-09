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
bool vis[108][1108];
ll dp[108][1108];
ll b,e,t,d;

ll repeat(ll pos,ll cur)
{
    if(pos==t)
    {
        if(cur==e)
            return e;
        return -Mod;
    }
    if(vis[pos][cur])
        return dp[pos][cur];
    ll mx = -Mod;
    for(ll i=max(1LL,cur-d); i<=cur+d; i++)
    {
        mx = max(mx,repeat(pos+1,i));
    }
    vis[pos][cur] = 1;
    return dp[pos][cur] = mx+cur;
}

void solve(int tt)
{
    cin >> b >> e >> t >> d;
    cout <<repeat(1,b)<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

