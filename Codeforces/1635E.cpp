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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    bool ok = 1;
    for(i=0; i<m; i++)
    {
        cin >> tt >> u >> v;
        if(v>u)   swap(u,v);
        if(tt==1)
            v1.pb({u,v});
        else
        {
            ok = 0;
            g[u].pb(v);
        }
    }
    if(ok)
    {
        cout <<"YES\n";

        return ;
    }
    sort(v2.begin(), v2.end());
    q.push(v2[0].first);
    while( !q.empty() )
    {
        u =  q.front();
        q.pop();

    }

    return ;
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
