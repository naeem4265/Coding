#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("gold_mine_chapter_1_input.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 108
using namespace std;
vector<ll> lst;
vector<ll> g[limit];
ll gold[limit],mx;

void dfs(ll u,ll pr, ll ct)
{
    bool ok=1;
    for(ll v: g[u])
    {
        if(v==pr) continue;
        ok = 0;
        dfs(v,u, ct+gold[v]);
    }
    if(mx<ct)
        mx = ct;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    for(i=0; i<=n; i++)
    {
        g[i].clear();
        gold[i] = 0;
    }
    lst.clear();

    for(i=1; i<=n; i++)
        cin >> gold[i];

    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for(ll v: g[1])
    {
        mx = 0;
        dfs(v,1,gold[v]);
        lst.pb(mx);
    }

    lst.pb(0);
    lst.pb(0);
    if( 1&lst.size())
        lst.pb(0);
    sort(lst.begin(),lst.end());

//    for(i=lst.size()-1; i>=0; i--)
//    {
//        cout <<lst[i]<<" ";
//    }

    ll sz = lst.size();
    ll ans = gold[1]+lst[sz-1]+lst[sz-2];

    cout <<"Case #"<<t<<": "<<ans<<endl;
    return ;
}
int  main()
{
//    Fast
    Freed
    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
