#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> g[limit];
ll leave[limit];

ll dfs(ll u, ll pr)
{
    leave[u] = 0;
    for(ll v: g[u])
    {
        if(v==pr)  continue;
        leave[u] += dfs(v, u);
    }
    if(!leave[u])   return leave[u] = 1;
    return leave[u];
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll u,v;
    for(i=0; i<=n; i++)
    {
        g[i].clear();
    }

    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1, 0);
    cin >> q;
    while(q--)
    {
        cin >> u >> v;    //cout <<leave[u]<<" "<<leave[v]<<endl;
        cout << leave[u]*leave[v] <<endl;
    }

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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
