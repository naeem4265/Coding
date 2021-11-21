#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);

#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 108
using namespace std;
int price[limit],happy[limit],mn[limit],mx[limit],n;
int dp[limit][1008][limit];

int rec(int pos,int W)
{
    if(pos==n || W<=0)
        return 0;
    if(dp[pos][W][mx[pos]]>=0) return dp[pos][W][mx[pos]];
    int x=-Mod,y=0;
    if(W>=price[pos] && mx[pos])
    {
        mx[pos]--;
        x = happy[pos]+rec(pos,W-price[pos]);
        mx[pos]++;
    }
    y = rec(pos+1,W);

    dp[pos][W][mx[pos]]= max(x,y);  //cout <<pos<<" "<<W<<" "<<x<<" "<<y<<endl;
    return dp[pos][W][mx[pos]];
}

void solve(int t)
{
    int i,j,m,k,ok=1,ans=0;
    cin >> n >> m;
    memset(dp,-1,sizeof(dp));
    for(i=0; i<n;  i++)
    {
        cin >> price[i];
    }
    for(i=0; i<n;  i++)
    {
        cin >> happy[i];
    }
    for(i=0; i<n;  i++)
    {
        cin >> mn[i];
        m = m-(price[i]*mn[i]);
        ans = ans+(happy[i]*mn[i]);
    }
    for(i=0; i<n;  i++)
    {
        cin >> mx[i];
        mx[i] = mx[i]-mn[i];
    }
    if(m<0)
    {
        cout <<0<<endl;
        return ;
    }
    cout <<ans+rec(0,m)<<endl;
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

