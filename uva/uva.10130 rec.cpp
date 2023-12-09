#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1003
using namespace std;
int W[limit],L[limit],dp[limit][31],n;

int rec(int w,int pos)
{
    if(pos==n)
        return 0;
    if(dp[pos][w]!=-1) return dp[pos][w];
    int mx1=0,mx2=0;
    if(w>=W[pos])
    {
        mx1 = L[pos]+rec(w-W[pos],pos+1);   //cout <<pos<<" in "<<w<<" "<<L[pos]<<" "<<mx1<<endl;
    }
    mx2 = rec(w,pos+1);             //cout <<pos<<" dn "<<w<<" "<<W[pos]<<" "<<mx2<<endl;
    dp[pos][w] = max(mx1,mx2);        //cout <<pos<<" "<<w<<" "<<mx1<<" "<<mx2<<endl;
    return dp[pos][w];
}
void solve(int t)
{
    int i,j,m;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&L[i], &W[i]);
    }

    int ans = 0,q;
    scanf("%d",&q);
    while(q--)
    {
        int a;
        scanf("%d",&a);
        memset(dp,-1,sizeof(dp));
        ans += rec(a,0);
    }
    printf("%d\n", ans);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

