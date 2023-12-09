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
struct stk
{
    ll l,r,idx;
};
bool operator<(stk a, stk b)
{
    if((a.r-a.l)!=(b.r-b.l))  return (a.r-a.l)<(b.r-b.l);
    return a.l<b.l;

    if(a.l !=b.l ) return a.l<b.l;
    return a.r < b.r;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    ll b[n+5];
    vector<stk> v;
    stk z;
    for(i=1; i<=n; i++)
    {
        cin >> b[i];
        if(b[i]==1)
        {
            z.l = 1+(i/2);
            z.r = i/b[i];
            z.idx = i;
            v.pb(z);
        }
        else if(b[i])
        {
            ll x = i/b[i];
            while(x && (i/x)==b[i]) x--;
            x++;
            z.l = x;
            z.r = i/b[i];
            z.idx = i;
            v.pb(z);
        }
        else
        {
            z.l = i+1;
            z.r = n;
            z.idx = i;
            v.pb(z);
        }
    }
    sort(v.begin(), v.end());
    ll ans[n+5],pos=1;
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));
    for(i=0; i<n; i++)
    {
        z = v[i];
        pos = z.l;
        while(vis[pos]) pos++;
        ans[z.idx] = pos;
        vis[pos] = 1;
    }
    for(i=1; i<=n; i++)  cout <<ans[i]<<" ";
    cout <<endl;
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
        Please_AC(t);
    return 0;
}
