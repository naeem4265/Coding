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
vector<ll> g[limit];
map<pair<ll,ll>, ll> dis;
ll n, dis_a[limit], dis_b[limit], ans[limit];

void find_dis_a_b(ll u, ll d[] ) {
    for(ll i=0; i<=n; i++ )   d[i] = -1;
    d[u] = 0;
    queue<ll> q;
    q.push(u);
    while( !q.empty() ) {
        u = q.front();
        q.pop();
        for( ll x: g[u] )  {
            if( d[x]==-1 ) {
                q.push(x);
                d[x] = d[u]+1;
            }
        }
    }
}

ll find_all_dis(ll u, ll pr ) {
    ll ct = 1, sum = 1, mx =0 ;
    for( ll v: g[u] ) {
        if( v== pr )    continue;
        ct = find_all_dis( v, u );
        dis[{u, v}] = ct;      //cout <<u<<" "<<v<<" "<<dis[{u, v}]<<endl;
        sum += ct;
        mx = max( mx, ct);
    }
    mx = max( mx, n-sum);
    dis[{ u, pr }] = n - sum;   //cout <<u<<" "<<pr<<" "<<dis[{u, pr}]<<endl;
    ans[u] = n*2LL - mx - 2;
    return sum;
}

ll cal_ans( ll u, ll pr ) {
    if( u == 0 )   return 0;
    ll mx_node=0, mx_dis=0, sum = 0;
    for( ll v: g[u] ) {
        if( v==pr )  continue;
        if( mx_dis < dis[{u, v}] ) {
            mx_dis = dis[{u, v}];
            mx_node = v;
        }
        sum += dis[{ u, v }] * 2LL;
    }
    return 1LL + sum - dis[{u, mx_node}]*2LL + cal_ans( mx_node, u );
}

void Please_AC(ll tt)
{
    ll a,b, i, u, v;
    cin >> n ;
    cin >> a >> b;
    for( i=0; i<=n; i++ )   g[i].clear();
    for( i=1; i<n; i++ ) {
        cin >> u >> v;
        g[u].pb( v );
        g[v].pb( u );
    }
    find_dis_a_b(a, dis_a);
   // for( i=0; i<=n; i++ )   cout <<dis_a[i]<<" ";  cout <<endl;
    find_dis_a_b(b, dis_b);

    for( i=1; i<=n; i++ ) {
        if( g[i].size()==1 ) {
            find_all_dis( i, 0 );
            break;
        }
    }
    ll mn = 1e18;
    for( i=1; i<=n; i++ ) {
        mn = min( mn, cal_ans(i, 0) + max( dis_a[i], dis_b[i] ) );
    }
    cout << mn <<endl;

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
