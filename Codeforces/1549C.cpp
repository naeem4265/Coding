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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;
    ll ct[n+5];
    memset(ct,0,sizeof(ct));
    ll ans = 0;
    ll u,v,q;
    for(i=0; i<m; i++)
    {
        cin >> u >> v;
        if(u>v) swap(u,v);
        ct[u]++;
        if(ct[u]==1) ans++;
    }
    cin >> q;
    while(q--)
    {
        cin >> t;
        if(t==3)
        {
            cout << n - ans <<endl;;
        }
        else if(t==1)
        {
            cin >> u >> v;
            if(u>v) swap(u,v);
            ct[u]++;
            if(ct[u]==1) ans++;
        }
        else
        {
            cin >> u >> v;
            if(u>v) swap(u,v);
            ct[u]--;
            if(ct[u]==0) ans--;
        }
    }
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
