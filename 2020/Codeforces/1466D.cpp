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

struct stc
{
    ll w,f;
};
bool operator< (stc a,stc b )
{
    if(a.w!=b.w) return a.w>b.w;
    return a.f>b.f;
}

stc z;

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll W[n+5];
    ll sum = 0;
    vector<ll>g[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> W[i];
        sum += W[i];
        g[i].clear();
    }
    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    if(n==2)
    {
        cout <<sum<<endl;
        return ;
    }
    ll sz=0;
    vector<stc>v;
    for(i=1; i<=n; i++)
    {
        z.f = g[i].size()-1;
        if(z.f)
        {
            z.w = W[i];
            v.pb(z);
        }
    }
    sort(v.begin(),v.end());
    sz = v.size();
    j = 0;
    z = v[j];
    j = 1;
    ll ct,extra;
    ct = z.f;
    extra = z.w;

    for(i=1; i<n; i++)
    {
        cout <<sum<<" ";
        if(ct==0)
        {
            z = v[j];
            j++;
            ct = z.f;
            extra = z.w;
        }
        ct--;
        sum += extra;
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

