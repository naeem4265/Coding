#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
vector<pair<ll,ll> >v;
vector<ll> out;
bool vis[limit];

ll LB(ll hi,ll key)
{
    ll lo=0,m,x=Mod;
    while(lo<=hi)
    {
        m = (lo+hi)/2;
        if(v[m].first>=key)
        {
            hi = m-1;
            x = m;
        }
        else
        {
            lo = m+1;
        }
    }
    return x;
}
ll UB(ll hi,ll key)
{
    ll lo=0,m,x = -1;
    while(lo<=hi)
    {
        m = (lo+hi)/2;
        if(v[m].first>key)
        {
            hi = m-1;
            x = m;
        }
        else
        {
            lo = m+1;
            x = lo;
        }
    }
    return x;
}

ll BS(ll lo,ll hi)
{
    ll m,x = v[hi].second;
    while(lo<=hi)
    {
        m = (lo+hi)/2;
        if(vis[v[m].second])
        {
            lo = m+1;
        }
        else
        {
            x = v[m].second;
            hi = m-1;
        }
    }
    vis[x] = 1;
    return x;
}

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n >> m ;
    for(i=0; i<n+5; i++) vis[i] = 0;
    ll A[n+5],B[n+5],C[m+5];
    for(i=0; i<n; i++)
    {
        cin >> A[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> B[i];
    }
    for(i=0; i<m; i++)
    {
        cin >> C[i];
    }
    v.clear();
    out.clear();
    for(i=0; i<n; i++)
    {
        if(A[i]==B[i])
        {
            vis[i] = 1;
        }
        v.pb(mp(B[i],i));
    }
    sort(v.begin(),v.end());
    for(i=0; i<m; i++)
    {
        ll lo,up;
        lo = LB(n-1,C[i]);
        up = UB(n-1,C[i]);   //cout <<i<<" "<<lo<<" "<<up<<endl;
        if(lo>=up)
        {
            out.pb(-1);
        }
        else
            out.pb(BS(lo,up-1));
    }
    for(i=0; i<n; i++)
    {
        if(vis[v[i].second]==0)
        {
            cout <<"NO\n";
            return ;
        }
    }
    if(out[m-1]==-1)
    {
        cout <<"NO\n";
        return ;
    }
    cout <<"YES\n";
    for(i=0; i<m; i++)
    {
        if(out[i]==-1)
            cout <<out[m-1]+1<<" ";
        else
            cout <<out[i]+1<<" ";
    }
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

