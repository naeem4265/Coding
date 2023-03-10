#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


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
ll sum[4*limit], b[limit], ans[limit];

///segupdate O(logn)
void update(ll at,ll L,ll R,ll l, ll r)
{
    if(r<L || R<l)  return ;
    if(l<=L && R<=r)
    {
        sum[at]++;   //cout <<at<<" hrer "<<L<<" "<<R<<" "<<l<<" "<<r<<" "<<sum[at]<<endl;
        return;
    }
    ll mid = (L+R)/2;
    update(at*2,L,mid,l,r);
    update(at*2+1,mid+1,R,l,r);
}

///segquery O(logn) from l to r
ll Query(ll at,ll L,ll R,ll l,ll r,ll ct)
{      //cout <<at<<" "<<L<<" "<<R<<" "<<l<<" "<<r<<" "<<ct<<" "<<sum[at]<<endl;
    if(r<L || R<l)  return 0LL;
    if(l<=L && R<=r)
    {
        ct += sum[at];
        return b[l]*ct;         //cout <<l<<" hrer "<<ct<<endl;
    }
    ll mid = (L+R)/2;
    ll x = Query(at*2,L,mid,l,r,ct+sum[at]);
    ll y = Query(at*2+1,mid+1,R,l,r,ct+sum[at]);
    return x+y ;
}

void solve(ll t)
{
    ll i,j,n,q,m,k;
    cin >> n;

    for(i=0; i<=4*n; i++)
    {
        sum[i] = 0;
        ans[i] = 0;
    }

    ll a[n+5], csum[n+5];
    csum[0] = 0;
    for(i=1; i<=n; i++)
        cin >> a[i];

    for(i=1; i<=n; i++)
    {
        cin >> b[i];
        csum[i] = csum[i-1]+b[i];
    }
    csum[n+1] = 1e18;

    for(i=1; i<=n; i++)
    {
        ll lo=i,hi=n+1,mi,r=i-1;
        while(lo<=hi)
        {
            mi = (lo+hi)/2;
            if((csum[mi]-csum[i-1])<=a[i])
            {
                lo = mi+1;
                r = mi;
            }
            else
            {
                hi = mi-1;
            }
        }
        update(1,1,n,i,r);   //cout <<i<<" "<<r<<endl;
        ll rem = a[i]-(csum[r]-csum[i-1]);
        ans[r+1] += rem;
    }
    for(i=1; i<=n; i++)
        cout << ans[i] + Query(1, 1, n, i, i, 0) <<" ";
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
        solve(t);
    return 0;
}
