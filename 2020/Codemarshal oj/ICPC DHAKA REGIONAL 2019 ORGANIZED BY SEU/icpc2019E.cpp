#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 20005
using namespace std;

ll ct[limit],ans=0,n;
vector <pair<ll,ll> > g[limit],rem;

void dfs(ll p,ll u)
{
    ct[u]++;
    ll i,v,w,sz=g[u].size();
    for(i=0; i<sz; i++)
    {
        v=g[u][i].first;
        w=g[u][i].second;
        if(v==p)
            continue;
        dfs(u,v);
        ct[u] += ct[v];
        ans += ct[v]*(n-ct[v])*w;
        if(w<0)
        {
            rem.pb(mp(ct[v]*(n-ct[v]),-w));
        }
    }
}
void solve(ll t)
{
    ll i,j,u,v,w;
    cin >> n;
    ans=0;
    rem.clear();
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        ct[i]=0;
    }
    for(i=1; i<n; i++)
    {
        cin >> u >> v >>  w;
        g[u].pb(mp(v,w));
        g[v].pb(mp(u,w));
    }
    dfs(0,1);
    cout<<"Case "<<t<<": ";
    if(ans>=0)
    {
        cout<<0<<endl;
        return ;
    }
    ans *=-1;
    j = 0;
    sort(rem.begin(),rem.end());
    for(i=rem.size()-1;i>=0;i--)
    {
        w = rem[i].second;
        u = rem[i].first;
        if(ans%u)
            v=1+ans/u;
        else
            v=ans/u;
        ans -= u*w;  //cout <<endl<<w<<" "<<u<<" "<<v<<" "<<ans<<endl;
        if(ans<=0)
        {
            cout <<j+v<<endl;
            return;
        }
        j += w;
    }
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


