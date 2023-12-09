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
vector<ll> g[limit], tg[limit];
bool vis[limit];
ll tme;
ll st[limit],ft[limit];
vector<ll> output;

void dfs(ll u)
{
    st[u] = tme++;
    vis[u] = 1;
    for(ll v: g[u])
    {
        if(vis[v]==0)   dfs(v);
    }
    ft[u] = tme++;
}

void dfs2(ll u)
{
    vis[u] = 1;
    for(ll v: tg[u])
    {
        if(vis[v]==0)   dfs2(v);
    }
    output.pb(u);
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    tme = 1;

    memset(vis, 0, sizeof(vis));
    memset(st, 0, sizeof(st));
    memset(ft, 0, sizeof(ft));
    for(i=1; i<=n; i++)
    {
        ll v;
        cin >> v;
        g[i].pb(v);
        tg[v].pb(i);
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)   dfs(i);
    }
    vector<pair<ll,ll> > seq;
    for(i=1; i<=n; i++)
    {
        seq.pb({ft[i], i});
    }
    sort(seq.begin(), seq.end());
    reverse(seq.begin(), seq.end());
    memset(vis, 0, sizeof(vis));

    for(i=0; i<n; i++)
    {
        ll u = seq[i].second;
        if(vis[u]==0)
        {
            output.clear();
            dfs2(u);
            if(output.size()>=2)
            {
                cout << output.size()<<endl;
                for(ll v: output)
                    cout <<v<<" ";
                cout <<endl;
                return;
            }
        }
    }

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
