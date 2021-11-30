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
#define limit 300008
using namespace std;
ll d[limit],sum[4*limit];

///segtree() O(nlogn)
void build(ll at, ll L,ll R)
{
    sum[at] = 0;
    if(L==R)
    {
        sum[at] = d[L];
        return;
    }
    ll mid=(L+R)/2;
    build(at*2,L,mid);
    build(at*2+1,mid+1,R);
    sum[at] = sum[at*2]^sum[at*2+1];
}

///segupdate O(logn)
void update(ll at,ll L,ll R,ll pos,ll x)
{
    if(L==R)
    {
        sum[at] = sum[at]^x;
        d[pos] = x;
        return ;
    }
    ll mid = (L+R)/2;
    if(pos<=mid)
        update(at*2,L,mid,pos,x);
    else
        update(at*2+1,mid+1,R,pos,x);
    sum[at] = sum[at*2]^sum[at*2+1];
}

///segquery O(logn) from l to r
ll Query(ll at,ll L,ll R,ll l,ll r)
{
    if(r<L || R<l)  return 0LL;
    if(l<=L && R<=r)   return sum[at];
    ll mid = (L+R)/2;
    ll x = Query(at*2,L,mid,l,r);
    ll y = Query(at*2+1,mid+1,R,l,r);
    return x^y;
}

void solve(ll t)
{
    ll i,j,n,q,m,k;
    cin >> n >> q;
    for(i=1; i<=n; i++)
        cin >> d[i];
    build(1,1,n);
    for(i=0; i<q; i++)
    {
        ll type,pos,key,from,to;
        cin >> type;
        if(type==1)
        {
            cin >> pos >> key;
            update(1,1,n,pos,key);
        }
        else
        {
            cin >> from >> to;
            cout <<Query(1,1,n,from,to)<<endl;
        }
    }
    return ;
}
int  main()
{
    ///atcoder abc185F problem solution
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
