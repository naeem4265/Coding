#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2e5+5;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> g[limit];
vector<ll> del;
map<pair<ll,ll>,ll> mp;
bool ok;

ll dfs(ll u, ll pr)
{
    if(ok)  return 0;
    ll ct = 0;
    for(ll v: g[u])
    {
        if(v==pr)   continue;
        ct += dfs(v, u);
    }
    if(ct>2LL)
    {
        ok = 1;
        return 5;
    }
    else if(ct==2LL)
    {
        del.pb(mp[{u,pr}]);
        return 0;
    }
    return ct+1;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;

    for(i=0; i<=(n+2); i++)
    {
        g[i].clear();
    }
    del.clear();
    mp.clear();
    ok = 0;

    ll u,v;
    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
        mp[{u,v}] = i;
        mp[{v,u}] = i;
    }
    if(dfs(1, 0) || ok)
    {
        cout <<-1<<endl;
        return;
    }
    m = del.size();
    m--;

    cout <<m<<endl;
    for(i=0; i<m; i++)  cout <<del[i]<<" ";  cout <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

