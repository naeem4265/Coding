#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("sample.txt","r",stdin);
#define Fout freopen ("output.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;

vector<ll>graph[limit],transpose_g[limit];
vector<ll> sequence;
bool vis[limit];
ll st[limit],ft[limit];


void dfs(ll u)
{
    vis[u] = 1;
    for(ll v:graph[u])
    {
        if(vis[v]==0)
        {
            dfs(v);
        }
    }
    sequence.pb(u);
}

vector<ll> out;
void componet(ll u)
{
    out.pb(u);
    vis[u] = 1;
    for(ll v:transpose_g[u])
    {
        if(vis[v]==0)
        {
            componet(v);
        }
    }
}

/// Strongly Connected Component(SCC) O(Node+Edge)
void SCC(ll t)
{
    ll i,j;
    ll node,edge=11,u,v;
    cin >> node;
    while(cin >> u >> v)
    {
        graph[u].pb(v);
        transpose_g[v].pb(u);
    }
    for(i=0; i<node; i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }

    ll ct=0;
    memset(vis,0,sizeof(vis));
    for(i=node-1; i>=0; i--)
    {
        u = sequence[i];
        if(vis[u]==0)
        {
            out.clear();
            componet(u);
            ct++;
        }
    }

    cout << "Total SCC is :" << ct <<endl<<endl;
    cout << "The SCC's are :\n\n";
    memset(vis,0,sizeof(vis));
    for(i=node-1; i>=0; i--)
    {
        u = sequence[i];
        if(vis[u]==0)
        {
            out.clear();
            componet(u);
            for(j=0; j<out.size(); j++)
            {
                if(j!=0) cout <<"-->";
                cout << out[j];
            }
            cout << endl << endl;
        }
    }
    return ;
}

int  main()
{
//    Fast
    Freed
    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        SCC(t);
    return 0;
}
