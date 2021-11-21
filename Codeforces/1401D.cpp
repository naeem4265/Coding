#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
vector <ll> g[limit],ct;
ll n;
ll dfs(ll u,ll p=0)
{
    ll i,sz;   //cout <<u<<endl;
    sz = g[u].size();
    ll sum=0,x;
    for(auto &v: g[u])
    {
        if(p!=v)
        {
            x = dfs(v,u);
            ct.pb(x*(n-x));
            sum += x;
        }
    }  //cout <<u<<" "<<sum<<endl;
    return sum+1;
}
void solve(ll t)
{
    ll i,j,m,u,v;
    cin >> n;
    ct.clear();
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
    }
    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    cin >> m;
    ll prime[m+5];
    for(i=0; i<m; i++)
    {
        cin >> prime[i];
    }
    sort(prime,prime+m);
    if(m>=n)
    {
        for(i=n-1; i<m; i++)
            prime[n-2] = (prime[n-2]*prime[i])%Mod;
        m = n-1;
    }

    ll sum=dfs(1,0);
    sort(ct.begin(),ct.end());
    //for(i=0; i<ct.size(); i++)  cout <<ct[i]<<" ";
    ll ans =0;
    for(i=n-2; i>=0; i--)
    {
        ll x = ct[i];
        if(m)
        {
            m--;
            x = x*prime[m];   //cout<<i<<" "<<x<<" "<<m<<" "<<prime[m]<<endl;
        }
        ans = (ans+x)%Mod;
    }
    cout <<ans<<endl;
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

