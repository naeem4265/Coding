#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 500008
using namespace std;
ll last[limit];

///DSU O(n)
ll pr[limit], comes[limit];
ll Find(ll u, ll i)
{
    if(comes[u] > i) return u;
    if(pr[u]==u) return u;
    return pr[u] = Find(pr[u], comes[u]);
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;

    for(i=0; i<limit; i++)
    {
        pr[i] = i;
    }

    ll x,y;
    vector<pair<ll, ll> > v;

    for(i=0; i<n; i++)
    {
        cin >> tt;
        if(tt==1)
        {
            cin >> x;
            v.pb({x,0});
        }
        else
        {
            cin >> x >> y;
            v.pb({x,y});
        }
    }
    vector<ll> ans;

    for(i=n-1; i>=0; i--)
    {
        x = v[i].first;
        y = v[i].second;
        if(y)
        {
            pr[x] = Find(pr[y], i);  //cout <<x<<" "<<pr[x]<<endl;
            comes[x] = i;
        }
        else
        {
            ans.pb(pr[x]);  //cout <<x<<" akhon "<<pr[x]<<endl;
        }
    }
    ll sz = ans.size();
    for(i=sz-1; i>=0; i--)
    {
        cout <<ans[i]<<" ";
    }
    cout <<endl;
    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
