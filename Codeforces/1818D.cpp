#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2000+5;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> g[limit];
ll pr[limit],m;
bool vis[limit];
vector<pair<ll,ll> > ans;

void path(ll u)
{
    if(pr[u] == u)   return;
    vis[u] = 1;
    ans.pb({u, pr[u]});
    path(pr[u]);
}

bool bfs(ll node)
{       // cout <<node<<" "<<g[node].size()<<endl;
    if(g[node].size()<4)    return 0;
    queue<ll> Q;
    Q.push(node);
    while(!Q.empty())
    {
        ll u = Q.front();   // cout <<u<<endl;
        Q.pop();
        for(ll v: g[u])
        {         //cout <<u<<" edge "<<v<<" "<<pr[v]<<endl;
            if(pr[v]!=v)
            {
                vis[u] = 1;
                vis[v] = 1;
                ans.pb({u,v});
                path(u);
                path(v);
                for(ll v: g[node])
                {
                    if(vis[v]==0){
                        ans.pb({node, v});
                    }
                }
                return 1;
            }
            if(v!=node){
                Q.push(v);
                pr[v] = u;
                continue;
            }
        }
    }
    return 0;
}

void Please_AC(ll tt)
{
    ll i,j,n,k,q;
    cin >> n >> m;

        for(j=0; j<=n; j++)
        {
            vis[j] = 0;
            g[j].clear();
        }

    for(j=1; j<=m; j++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<=n; j++)
        {
            vis[j] = 0;
            pr[j] = j;
        }
        ans.clear();

        if(bfs(i))
        {
            cout <<"YES\n";
            cout <<ans.size()<<endl;
            for(i=0; i<ans.size(); i++)
            {
                cout << ans[i].first<<" "<<ans[i].second<<endl;
            }
            return ;
        }
    }
    cout <<"NO\n";
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

