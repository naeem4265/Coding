#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 200008
using namespace std;

bool vis[limit],vis2[limit];
ll pre[limit];

ll Find(ll u)
{
    if(vis2[pre[u]]==0) return pre[u];
    return pre[u] = Find(pre[u]);
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll d[n+5];

    for(i=0; i<n+5; i++)
    {
        vis[i] = 0;
        vis2[i] = 0;
        pre[i] = i-1;
    }

    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        vis[d[i]] = 1;
        vis2[d[i]] = 1;
    }

    ll a[n+5],b[n+5];
    a[1] = d[1];
    ll x = 1;
    for(i=2; i<=n; i++)
    {
        if(d[i-1]==d[i])
        {
            while(vis[x]) x++;
            vis[x] = 1;
            a[i] = x;
        }
        else
        {
            a[i] = d[i];
        }
    }

    b[1] = d[1];
    x = b[1];
    for(i=2; i<=n; i++)
    {
        if(d[i]==d[i-1])
        {
            x = d[i];
            x = Find(x);
            b[i] = x;
            vis2[x] = 1;
        }
        else
        {
            b[i] = d[i];
        }
    }

    for(i=1; i<=n; i++) cout <<a[i]<<" ";
    cout <<endl;
    for(i=1; i<=n; i++) cout <<b[i]<<" ";
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
