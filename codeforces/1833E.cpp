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
bool vis[limit];
ll mx,mn,first,ct,temp;
vector<ll> g[limit];

void dfs(ll u)
{
    vis[u] = 1;
    ct++;
    ll v = g[u][0];
    if(vis[v])
    {
        mx++;
        mn++;
        if(first!=v || ct<=2LL)
        {
            temp++;
        }
        return;
    }
    dfs(v);
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5],in[n+5];

    memset(in, 0, sizeof(in));
    for(i=0; i<=(n+3); i++)
    {
        vis[i] = 0;
        g[i].clear();
    }
    mx = 0;
    mn = 0;
    temp = 0;

    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        g[i].pb(d[i]);
        in[d[i]]++;
    }

    for(i=1; i<=n; i++)
    {
        if(in[i]==0)
        {
            ct = 0;
            first = i;
            dfs(i);
        }
    }

    for(i=1; i<=n; i++)
    {
        if(!vis[i]){
            ct = 0;
            first = i;
            dfs(i);
        }
    }
    if(temp>1LL)   mn -= temp;
    mn = max(mn, 1LL);
    cout << mn<<" "<<mx<<endl;

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

