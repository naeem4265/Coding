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
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;
    bool vis[n+5];
    memset(vis,0,sizeof(vis));

    for(i=0; i<m; i++)
    {
        ll b;
        cin >> k >> b >> k;
        vis[b] = 1;
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            for(j=1; j<=n; j++)
            {
                if(i==j) continue;
                cout <<i<<" "<<j<<endl;
            }
            return ;
        }
    }


    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
