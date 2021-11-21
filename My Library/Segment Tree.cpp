#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 300008
using namespace std;

///segtree() O(nlogn)
ll A[limit],T[4*limit];
ll segtree(ll node,ll l,ll r)
{
    if(l==r) return T[node]=A[l];
    ll mid=(l+r)/2;
    T[2*node] = segtree(2*node,l,mid);
    T[2*node+1] = segtree(2*node+1,mid+1,r);
    return T[node] = T[2*node]^T[2*node+1];
}
///segupdate O(logn)
ll segupdate(ll node,ll l,ll r,ll pos,ll key)
{
    if(l==r && l==pos) return T[node] = T[node]^key;
    ll mid=(l+r)/2;
    if(pos<=mid)
        T[2*node] = segupdate(2*node,l,mid,pos,key);
    else
        T[2*node+1] = segupdate(2*node+1,mid+1,r,pos,key);
    return T[node] = T[2*node]^T[2*node+1];
}
///segquery O(logn)
ll  segquery(ll node,ll l,ll r,ll from,ll to)
{
    if(l>=from && r<=to) return T[node];
    if(l>to || r<from)  return 0;
    ll mid=(l+r)/2;
    return segquery(2*node,l,mid,from,to)^segquery(2*node+1,mid+1,r,from,to);
}

void solve(ll t)
{
    ll i,j,n,q,m,k;
    cin >> n >> q;
    for(i=1; i<=n; i++)
        cin >> A[i];
    segtree(1,1,n);
    for(i=0; i<q; i++)
    {
        ll type,pos,key,from,to;
        cin >> type;
        if(type==1)
        {
            cin >> pos >> key;
            segupdate(1,1,n,pos,key);
        }
        else
        {
            cin >> from >> to;
            cout <<segquery(1,1,n,from,to)<<endl;
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

