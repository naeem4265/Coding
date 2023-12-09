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
ll cnt[limit], ans,k,c;

ll dfs(ll u, ll pr)
{            //cout <<u<<" "<<pr<<endl;
    ll ct = 0;
    for(ll v: g[u])
    {
        if(v==pr)  continue;
        ct = max(ct,dfs(v, u));
    }
    return cnt[u] = ct+1;
}

void cal(ll u,ll pr, ll temp)
{          // cout <<u<<" "<<pr<<" "<<temp<<endl;
    ll mx = 0, node=0;
    for(ll v: g[u])
    {
        if(v==pr)   continue;
        if(mx<cnt[v])
        {
            mx = cnt[v];
            node = v;
        }
    }
    if(u==1)
    {
        ans = cnt[node]*k;
    }
    mx = 0;
    for(ll v: g[u])
    {
        if(v==pr || v==node)   continue;
        if(mx<cnt[v])
        {
            mx = cnt[v];
        }
    }
    ans = max(ans, (cnt[node]+mx)*k-(temp+mx)*c);
    if(node)   cal(node, u, temp+1);
}

void Please_AC(ll tt)
{
    ll i,j,n,m,q;
    cin >> n >> k >> c;

    ans = 0;
    for(i=0; i<=n; i++)
    {
        g[i].clear();
        cnt[i] = 0;
    }

    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1, 0);
    cal(1, 0, 0);

    cout << ans <<endl;

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

