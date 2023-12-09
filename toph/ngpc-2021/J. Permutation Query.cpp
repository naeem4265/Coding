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
#define limit 200008
using namespace std;
ll d[limit],sum[4*limit];

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
    sum[at] = sum[at*2]+sum[at*2+1];
}

void update(ll at,ll L,ll R,ll pos,ll x)
{
    if(L==R)
    {
        sum[at] = x;
        d[pos] = x;
        return ;
    }
    ll mid = (L+R)/2;
    if(pos<=mid)
        update(at*2,L,mid,pos,x);
    else
        update(at*2+1,mid+1,R,pos,x);
    sum[at] = sum[at*2]+sum[at*2+1];
}

ll Query(ll at,ll L,ll R,ll l,ll r)
{
    if(r<L || R<l)  return 0LL;
    if(l<=L && R<=r)   return sum[at];
    ll mid = (L+R)/2;
    ll x = Query(at*2,L,mid,l,r);
    ll y = Query(at*2+1,mid+1,R,l,r);
    return x+y;
}


void solve(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> q;
    for(i=1; i<=n; i++)
        cin >> d[i];
    build(1,1,n);

    while(q--)
    {
        cin >> tt;
        if(tt==1)
        {
            ll l,r,x;
            cin >> l >> r;
            ll len=r-l+1;
            x = Query(1,1,n,l,r);
            m = len*(len+1)/2;
            if(m==x)
                cout <<"YES\n";
            else
                cout <<"NO\n";
        }
        else
        {
            ll pos,val;
            cin >> pos >> val;
            update(1,1,n,pos,val);
        }
    }
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

