#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=1; i<=n; i++)
        cin >> d[i];
    if(n==1)
    {
        cout <<-1<<endl;
        return ;
    }
    ll p[n+5];
    memset(p, 0, sizeof(p));
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));

    if(d[n]==n)
    {
        p[n-1] = n;
        vis[n] = 1;
    }
    for(i=1; i<=n; i++)
    {
        if(p[i])  continue;
        for(j=1; j<=n; j++)
        {
            if(vis[j]==0 && d[i]!=j)
            {
                p[i] = j;
                vis[j] = 1;
                break;
            }
        }
    }
    for(i=1; i<=n; i++)  cout <<p[i]<<" ";
    cout <<endl;
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
