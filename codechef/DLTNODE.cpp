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

vector<ll> g[limit];
ll d[limit],Gcd[limit],ans;
queue<ll> q;

void travers(ll pr,ll u)
{
    q.push(u);
    for(ll v: g[u])
    {
        if(v==pr)   continue;
        travers(u,v);
    }
}

ll dfs(ll pr,ll u)
{
    if(Gcd[u])   return Gcd[u];
    ll G=0;
    for(ll v: g[u])
    {
        if(v==pr)   continue;
        G = __gcd(G,dfs(u,v));
    }
    return Gcd[u] = __gcd(G,d[u]);
}

void solve(ll tt)
{
    ll i,j,n,m,k,u,v;
    string s;
    cin >> n;

    ans = 1;
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        Gcd[i] = 0;
    }

    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    for(i=1; i<=n; i++)
    {
        if(g[i].size()==1)
        {
            travers(0,i);
            break;
        }
    }

    while(!q.empty())
    {
        u = q.front();
        q.pop();
        ll sum = 0;
        Gcd[u] = 0;
        for(ll v: g[u])
        {
            sum += dfs(u,v);
        }
        Gcd[u] = 0;
        ans = max(ans, sum);   //cout <<u<<" "<<sum<<" "<<ans <<endl;
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
