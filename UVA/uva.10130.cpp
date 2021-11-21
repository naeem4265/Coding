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

void solve(int t)
{
    int i,j,n,m;
    scanf("%d",&n);
    int dp[35];
    vector<pair<int,int> >product;
    for(i=0; i<35; i++)
        dp[i]=0;
    for(i=0; i<n; i++)
    {
        int x,y;
        scanf("%d %d",&x, &y);
        product.pb(mp(y,x));
    }
    sort(product.begin(),product.end());
    for(i=0; i<n; i++)
    {
        int w=product[i].first,lav=product[i].second;
        for(j=30; j>0; j--)
        {
            if(j-w < 0) continue;
            dp[j] = max(dp[j],lav+dp[j-w]);
        }
    }
    int ans = 0,q;
    scanf("%d",&q);
    while(q--)
    {
        int a;
        scanf("%d",&a);
        ans += dp[a];
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

