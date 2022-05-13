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

ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll a[n+5],b[n+5], c[n+5],link[n+5],next;
    memset(link, 0, sizeof(link));

    for(i=0; i<n; i++) cin >> a[i];
    for(i=0; i<n; i++) cin >> b[i];
    for(i=0; i<n; i++) cin >> c[i];

    for(i=0; i<n; i++)
    {
        link[a[i]] = b[i];
    }
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));
    for(i=0; i<n; i++)
    {
        if(c[i])
        {
            next = a[i];
            while(vis[next]==0)
            {
                vis[next] = 1;
                next = link[next];
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==b[i] || vis[a[i]] || vis[b[i]])
        {
            next = a[i];
            while(vis[next]==0)
            {
                vis[next] = 1;
                next = link[next];
            }
        }
    }
    ll ct = 0;
    for(i=0; i<n; i++)
    {
        if(vis[a[i]]==0)
        {
            ct++;
            next = a[i];
            while(vis[next]==0)
            {
                vis[next] = 1;
                next = link[next];
            }
        }
    }
    cout << bigmod(2LL, ct) <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
