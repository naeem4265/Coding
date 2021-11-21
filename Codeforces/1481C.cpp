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
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> m;
    ll a[n+5],b[n+5],c[m+5];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> b[i];
    }
    for(i=0; i<m; i++)
    {
        cin >> c[i];
    }
    bool ok=0;
    ll idx=0;

    for(i=n-1; i>=0; i--)
    {
        if(b[i]==c[m-1])
        {
            ok = 1;
            if(b[i]!=a[i])
            {
                idx = i;
                break;
            }
            idx = i;
        }
    }

    if(ok==0)
    {
        cout <<"No\n";
        return ;
    }
    a[idx] = b[idx];

    vector<ll> v[n+5];
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            v[b[i]].pb(i);
        }
    }
    vector<ll> ans;
    for(i=0; i<m-1; i++)
    {
        ll sz = v[c[i]].size();
        if(sz)
        {
            ans.pb(v[c[i]][sz-1]);
            v[c[i]].pop_back();
        }
        else
            ans.pb(idx);
    }
    ans.pb(idx);
    for(i=0; i<=n; i++)
    {
        if(v[i].size())
        {
            cout <<"No\n";
            return ;
        }
    }
    cout <<"Yes\n";
    for(i=0; i<m; i++)
        cout << ans[i]+1 <<" ";
    cout <<endl;
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
