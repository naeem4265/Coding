#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;
vector<ll> tree[limit];
ll s[limit];
ll ans;

ll dfs(ll u, ll k)
{
    ans += s[u]*k;
    ll m = tree[u].size();
    if(m==0)
    {
        return s[u]*(k+1)-s[u]*k;
    }

    ll x,rem = k%m;
    vector<ll> vec;
    for(ll v: tree[u])
    {
        x = dfs(v, (k/m));
        vec.pb(x);
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    for(ll i=0; i<rem; i++)
    {
        ans += vec[i];
    }
    return s[u]+vec[rem];
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> k;

    ans = 0;
    for(i=0; i<=n+5; i++)
    {
        tree[i].clear();
    }

    ll v;
    for(i=2; i<=n; i++)
    {
        cin >> v;
        tree[v].pb(i);
    }
    for(i=1; i<=n; i++)
    {
        cin >> s[i];
    }

    dfs(1, k);
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
        Please_AC(t);
    return 0;
}
