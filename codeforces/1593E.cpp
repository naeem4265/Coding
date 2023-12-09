#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
vector<ll>g[limit],myset,cpy;

ll cnt[limit],ans,sz;

void check()
{
    while(sz)
    {
        ll u = myset[sz-1];
        cnt[u]=-1;     //cout <<u<<" erased\n";
        if(ans)
            ans--;
        sz--;
        myset.pop_back();
        for(ll v: g[u])
        {
            cnt[v]--;
            if(cnt[v]==1 || cnt[v]==0)
            {
                cpy.pb(v);   //cout <<v<<" next "<<cnt[v]<<endl;
            }
        }
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> k;

    for(i=0; i<n+5; i++)
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
        cnt[u]++;
        cnt[v]++;
    }

    cpy.clear();
    for(i=1; i<=n; i++)
    {
        if(cnt[i]==1 || cnt[i]==0)
        {
            cpy.pb(i);
        }
    }
    ans = n;
    for(j=1; j<=k && ans; j++)
    {
        sz = cpy.size();
        myset.clear();
        for(i=0; i<sz; i++)
        {
            myset.pb(cpy[i]);
        }
        cpy.clear();
        check();
    }

    cout << ans <<endl;
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
        solve(t);
    return 0;
}
