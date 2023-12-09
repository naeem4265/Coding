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
    ll i,j,n,m,k;

    cin >> n;
    vector<ll> g[n+5];

    for(i=2; i<=n; i++)
    {
        cin >> m;
        g[m].pb(i);
    }
    ll ans = 0;
    queue<ll> q;
    q.push(1);
    vector<ll> v;
    v.pb(1);
    while(!q.empty())
    {
        ll u = q.front();
        q.pop();
        ll ct = 0;
        for(ll v: g[u])
        {
            ct++;
            q.push(v);
        }
        if(ct)  v.pb(ct);
    }

    sort(v.begin(), v.end());
    n = v.size();
    for(i=0; i<n; i++)
    {
        v[i]--;
        ans++;
        v[i] -= i;
    }    //cout <<n<<" "<<ans<<endl;
    sort(v.begin(), v.end());
    ll mn = n-1;
    if(v[n-1]<=0)
    {
        cout <<ans<<endl;
        return ;
    }
    for(i=0; i<n; i++)
    {
        if(v[i]>0)
            break;
    }
    while(1)
    {
        ans++;       //cout <<i<<" "<<ans<<endl;
        v[mn]--;
        mn = 0;
        for(j=n-1; j>=i; j--)
        {
            v[j]--;
            if(v[mn]<v[j])  mn = j;
        }
        if(v[mn]<=0)  break;
    }

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
        solve(t);
    return 0;
}
