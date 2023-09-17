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
vector<pair<ll,ll> > v[limit];

void Please_AC(ll tt)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));

    for(i=1; i<=n; i++)
    {
        v[i].clear();
    }

    for(i=0; i<m; i++)
    {
        ll a, b, d;
        cin >> a >> b >> d;
        v[a].pb({b, d});
        v[b].pb({a, -d});
    }
    for(i=1; i<=n; i++)  sort(v[i].begin(), v[i].end());
    ll pos[n+5];

    vector<ll> q;
    for(i=1; i<=n; i++)
    {
        m = v[i].size();
        if(vis[i]==0)
        {
            pos[i] = 0;
            q.pb(i);
            vis[i] = 1;
        }
        while(!q.empty())
        {
            ll u = q[q.size()-1];
            q.pop_back();
            m = v[u].size();
            for(j=0; j<m; j++)
            {
                ll x = v[u][j].first;   //cout <<u<<" "<<x<<" "<<vis[x]<<" "<<pos[x]<<" "<<pos[i]+v[i][j].second<<endl;
                if(vis[x])
                {
                    if(pos[x] != (pos[u]+v[u][j].second))
                    {
                        cout <<"NO\n";
                        return;
                    }
                }
                else
                {
                    pos[x] = pos[u]+v[u][j].second;
                    q.pb(x);
                }
                vis[x] = 1;
            }
        }
    }
    cout <<"YES\n";

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
