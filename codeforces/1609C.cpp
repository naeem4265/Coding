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

bool vis[limit];
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
}

ll n,k;
ll d[limit],dpl[limit],dpr[limit];

ll left(ll i)
{
    if(i<0 || d[i]>1) return 0;
    if(dpl[i]!=-1)  return dpl[i];
    return dpl[i] = 1+left(i-k);
}
ll right(ll i)
{
    if(i>=n || d[i]>1) return 0;
    if(dpr[i]!=-1)  return dpr[i];
    return dpr[i] = 1+right(i+k);
}

void solve(ll tt)
{
    ll i,j;
    cin >> n >> k;
    for(i=0; i<n; i++)
        cin >> d[i];
    ll ans = 0;
    for(i=0; i<n+5; i++)
    {
        dpl[i] = -1;
        dpr[i] = -1;
    }
    for(i=0; i<n; i++)
    {
        if(vis[d[i]]==0)
        {
            ll l = left(i-k);
            ll r = right(i+k);
            ans = ans+l+r+l*r;
        }
    }
    cout << ans <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    seive();
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
