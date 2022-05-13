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
    int i,j,n,m,k,x,y;
    cin >> n >> k >> x >> y;
    bool vis[n+2];
    memset(vis,0,sizeof(vis));
    vis[x] = 1;
    while(1)
    {
        x = (x+k)%n;
        if(vis[x])
        {
            break;
        }
        vis[x] = 1;
    }
    if(vis[y])
        cout <<"YES\n";
    else
        cout <<"NO\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

