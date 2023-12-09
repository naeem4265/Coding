#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 108
using namespace std;

vector<ll>g[limit];
bool vis[limit],vis2[limit];
ll node[limit],len[limit],k,n;
vector<ll> out;

void dfs(ll u)
{
    vis[u] = 1;
    node[u] = 1;
    len[u] = 0;
    for(auto v:g[u])
    {
        if(vis[v]==0)
        {
             dfs(v);
             node[u] += node[v];
             len[u] = max(len[u],len[v]+1);
        }
    }
}

void dfs2(ll u,ll pr)
{
    k--;
    out.pb(u);        //cout <<u <<" loaded "<<k<<endl;
    if(k==0) return ;
    ll temp = 0;

    for(auto v:g[u])
    {
        if(vis2[v] || v==pr) continue;
                //cout <<k<<" "<<node[v]<<" "<<v<<endl;
        if(node[v]>=k)
        {
            //cout <<u<<" "<<v<<" "<<endl;
            if(len[v] >= len[temp] && len[u]>len[v])
            {
                temp = v;
            }
        }
    }
    if(temp > 0)
    {                    //cout <<vis2[temp]<<" new call up "<<temp<<endl;
        vis2[temp] = 1;
        dfs2(temp,u);
        return ;
    }
    else
    {
        ll temp = n+1;
        for(auto v:g[u])
        {
            if(vis2[v] || v==pr) continue;

            if(len[v]<len[temp])
            {
                temp = v;
            }
        }       //cout <<vis2[temp]<<" new call down "<<temp<<endl;
        vis2[temp] = 1;
        if(temp>n) return ;
        dfs2(temp,u);
        k++;
        dfs2(u,pr);
    }
}

void solve(ll t)
{
    ll i,j,m,v;

    out.clear();
    for(i=0; i<limit; i++)
    {
        g[i].clear();
        vis[i] = vis2[i] = 0;
        node[i] = len[i] = 0;
    }

    string s;
    cin >> n >> k;
    for(i=2; i<=n; i++)
    {
        cin >> v;
        g[i].pb(v);
        g[v].pb(i);
    }
    vis[0] = vis[n+1] = vis2[0] = vis2[n+1] = 1;
    len[0] = 0;
    len[n+1] = Mod;
    dfs(1);
//    for(i=1; i<=n; i++)
//    {
//        cout <<i << ' ' << node[i] <<" " << len[i] <<endl;
//    }
    dfs2(1,0);
    m = out.size();
    cout << m-1 <<endl;
    for(i=0; i<m; i++)
        cout <<out[i]<<" "; cout << endl;
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

/*
1
19 12
1 1 2 2 5 6 5 3 3 9 10 10 1 14 14 14 14 14
*/
