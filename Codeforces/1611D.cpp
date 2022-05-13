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

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    ll b[n+5],pr[n+5],p[n+5],dis[n+5],total[n+5];
    memset(dis,-1,sizeof(dis));

    ll root=0;
    for(i=1; i<=n; i++)
    {
        cin >> b[i];
        pr[i] = b[i];
        if(pr[i]==i)
            root = i;
    }
    for(i=0; i<n; i++)
    {
        cin >> p[i];
    }

    dis[root] = 0;
    total[root] = 0;
    ll cur=0;
    bool ok=1;
    if(p[0] != root)
        ok = 0;

    for(i=1; i<n; i++)
    {
        ll v = p[i];
        ll u = pr[v];
        if(dis[u]==-1)  ok = 0;
        cur++;    //cout <<i<<" "<<u<<" "<<v<<' '<<dis[u]<<" "<<dis[v]<<" "<<cur<<endl;
        dis[v] = cur-total[u];
        total[v] = cur;
    }

    if(ok==0)
    {
        cout <<-1<<endl;
        return ;
    }
    for(i=1; i<=n; i++)
    {
        cout <<dis[i]<<" ";
    }
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
