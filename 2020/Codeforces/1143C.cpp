#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;

set<ll>st;
vector<ll> g[limit];
bool c[limit];

bool dfs(ll u)
{      //cout <<u<<" "<<c[u]<<endl;
    bool ok=1;
    for(auto v:g[u])
    {
        if(dfs(v)==0)
            ok=0;
    }
    if(c[u] && ok)
        st.insert(u);
    return c[u];
}

void solve(ll tc)
{
    ll i,j,n,m,k,v,root;
    cin >> n ;
    for(i=1; i<=n; i++)
    {
        cin >> v >> c[i];
        if(v==-1)
        {
            root=i;
            continue;
        }
        g[v].pb(i);
    }
    dfs(root);
    if(st.size())
        for(auto i:st)
            cout <<i<<" ";
    else
        cout <<-1;
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    //cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

