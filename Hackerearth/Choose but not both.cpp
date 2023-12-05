#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 300008
using namespace std;
int dp[limit],D[limit],n;
bool vis[limit];
int rec(int pos)
{
    if(pos>n) return 0;
    if(dp[pos]>=0) return dp[pos];
    int x=0,y=0;
    if(!vis[pos] && !vis[D[pos]])
    {
        int ok=0;
        vis[pos] = 1;
        if(vis[D[pos]]) ok=1;
        vis[D[pos]] = 1;
        x = 1+rec(pos+1);
        vis[pos] = 0;
        if(!ok)
            vis[D[pos]]=0;
    }
    y = rec(pos+1);
    dp[pos] = max(x,y);  //cout <<pos<<" "<<dp[pos]<<endl;
    return dp[pos];
}
void solve(int t)
{
    int i,j,m,k,ans=0;
    cin >> n ;

    memset(dp,-1,sizeof(dp));
    memset(vis,0,sizeof(vis));

//    for(i=1; i<=n; i++)
//    {
//        cin >> D[i];
//        if(i==D[i])
//            vis[i]=1;
//    }
//    for(i=n; i>0; i--)
//    {
//        if(!vis[i] && !vis[D[i]])
//        {
//            vis[i] = 1;
//            vis[D[i]] = 1;
//            ans++;
//        }
//    }
//    cout <<ans<<endl;
    cout <<rec(1)<<endl;

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

