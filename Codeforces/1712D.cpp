#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll ans;
vector<ll> g[5];
ll d[limit];

ll bfs(ll u, ll v)
{
    //cout <<u<<" "<<v<<" "<<d[0]<<" "<<d[1]<<" "<<d[2]<<endl; cout << ans <<endl;
    if(u==1 && v==2)  return min(min(d[0], d[1]), min({d[0],d[1],d[2]})+min(d[1],d[2]));
    if(u==1 && v==3)  return min(min({d[0],d[1],d[2]}), min({d[0],d[1]})+min(d[1],d[2]));
    return min(min({d[1],d[2]}), min({d[0],d[1]})+min({d[0],d[1],d[2]}));
}

void rec(ll pos, ll k)
{
    if(pos==3)
    {
        ans = max(bfs(1,2),ans);
        ans = max(bfs(1,3),ans);
        ans = max(bfs(2,3),ans);
        return ;
    }
    rec(pos+1, k);
    if(k)
    {
        ll temp = d[pos];
        d[pos] = 1000000000;
        rec(pos+1, k-1);
        d[pos] = temp;
    }
}
void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ans = 0;
    cin >> n >> k;
    for(i=0; i<n; i++)  cin >> d[i];
    if(n==3)
    {
        rec(0, k);
        cout << ans <<endl;
        return ;
    }

    sort(d, d+n);
    for(i=0; i<k; i++)
        d[i] = 1000000000;
    sort(d, d+n);
    cout << min(d[n-2], d[0]*2LL) <<endl;

    return ;
}

int  main()
{
    Fast
//    Freed
//    Fout
        g[1].pb(2);
        g[1].pb(3);
        g[2].pb(1);
        g[2].pb(3);
        g[3].pb(1);
        g[3].pb(2);
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
