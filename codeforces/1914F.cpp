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
ll cnt[limit],child[limit];

void dfs(ll u ) {
    ll mx = 0, sum = 0, n = 0, sum2=0;
    child[u] = 1;

    for( ll v: g[u] ) {
        dfs( v );
        if( cnt[v] > mx ) {
            mx = cnt[v];
            n = v;
        } 
        child[u] += child[v];
    }
    for( ll v: g[u] ) {
        if( v== n )   continue;
        mx = max( 0LL, mx - child[v] );
    }
    cnt[u] = mx;
    if( child[u]%2==0 && cnt[u]==0 )  cnt[u] = 1;

    cnt[u]++;       //  cout <<u<<" " <<cnt[u]<<" "<<child[u]<<" "<<child[n]<<" "<<n<<endl;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q, u;
    cin >> n;
    for(i=0; i<=n; i++)   g[i].clear();
    for(i=2; i<=n; i++ ) {
        cin >> u;
        g[u].pb(i);
    }
    dfs( 1 );
    ll ans = (n - cnt[1])/2LL;
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
