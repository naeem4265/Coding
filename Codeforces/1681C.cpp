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


void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll a[n+5],b[n+5],acopy[n+5],bcopy[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
        acopy[i] = a[i];
    }
    for(i=1; i<=n; i++)
    {
        cin >> b[i];
        bcopy[i] = b[i];
    }
    a[0] = b[0] = -1;
    acopy[0] = bcopy[0] = -1;
    sort(acopy, acopy+n+1);
    sort(bcopy, bcopy+n+1);
    vector<pair<ll,ll> > v;
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));

    for(i=1; i<=n; i++)
    {
        ll x = acopy[i];
        ll y = bcopy[i];
        for(j=i; j<=n; j++)
        {
            if(a[j]==x && b[j]==y )
            {
                if(i!=j)
                {
                    v.pb({i,j});
                }
                swap(a[i], a[j]);
                swap(b[i], b[j]);
                break;
            }
        }
        if(j>n)
        {
            cout <<-1<<endl;
            return ;
        }
    }
    cout <<v.size()<<endl;
    for(i=0; i<v.size(); i++)
    {
        cout <<v[i].first<<" "<<v[i].second<<endl;
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
