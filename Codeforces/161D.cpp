#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 5e4+5;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> g[limit];
ll ans,dis[limit][502],k;

void dfs(ll u, ll pr)
{
	dis[u][0] = 1;
	ll pre[k+2];
	memset(pre, 0, sizeof(pre));
	for(auto v: g[u])
	{
		if(v==pr)   continue;
		dfs(v, u);
		for(ll i=1; i<=k; i++)
		{
			dis[u][i] += dis[v][i-1];
			if(i==k)    ans += dis[v][i-1];
		}
		for(ll l=0; l<k-1; l++)
		{
			ans += dis[v][l] * pre[k-2-l];
		}
		for(ll i=0; i<k; i++)
			pre[i] += dis[v][i];
	}
}


void Please_AC(ll tt)
{
    ll i,j,n,m;
    cin >> n >> k;
    for(i=1; i<n; i++)
    {
    	ll u,v;
    	cin >> u >> v;
    	g[u].pb(v);
    	g[v].pb(u);
    }
    if(k==1)   ans = n-1;
    else
    	dfs(1,0);
    cout << ans <<endl;


    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}