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

void solve(ll t)
{
    ll i,j,n,m,k;
    ll l,r,s,d;
    cin >> n  >> l >> r >> s;
    ll ans[n+5];
    bool vis[n+5];
    memset(vis,0,sizeof(vis));

    d = r-l+1;
    ll cur = n;
    for(i=l; i<=r; i++)
    {
        d = r-i;
        ll mn = (d*(d+1))/2;
        ll ace = s-mn;
        while(vis[cur])
            cur--;
        if(ace<=d || cur<1)
        {
            cout <<-1<<endl;
            return ;
        }
        if(ace>=cur)
        {
            ans[i] = cur;
            vis[cur] = 1;
            s -= cur;
            cur--;
        }
        else
        {
            ans[i] = ace;
            vis[ace] = 1;
            s -= ace;
        }
    }
    if(s)
    {
        cout <<-1<<endl;
        return ;
    }
    cur = n;
    for(i=1; i<l; i++)
    {
        while(vis[cur])
            cur--;
        ans[i] = cur;
        vis[cur] = 1;
    }
    cur = n;
    for(i=r+1; i<=n; i++)
    {
        while(vis[cur])
            cur--;
        ans[i] = cur;
        vis[cur] = 1;
    }
    for(i=1; i<=n; i++)
        cout <<ans[i]<<" ";
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
