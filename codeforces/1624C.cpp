#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    scanf("%d",&n);
    ll d[n+5];
    bool vis[n+5];
    memset(vis,0,sizeof(vis));
    for(i=0; i<n; i++)
        scanf("%d",&d[i]);
    sort(d,d+n);
    for(i=n; i>0; i--)
    {
        for(j=n-1; j>=0; j--)
        {
            if(vis[j])  continue;
            m = d[j];
            while(m)
            {
                if(m==i) break;
                m = m >> 1;;
            }
            if(i==m)
            {
                vis[j] = 1;
                break;
            }
        }
        if(j<0)
        {
            printf("NO\n");
            return ;
        }
    }
    printf("YES\n");

    return ;
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
