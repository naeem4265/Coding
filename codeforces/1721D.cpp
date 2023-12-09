#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll m;
struct st
{
    ll sz;
    vector<ll> a,b;
};

vector<st> v;

bool check(ll pos,ll x)
{
    st z = v[pos];
    ll ct = 0;
    for(ll i=0; i<z.sz; i++)
    {
        if(z.a[i] & x) ct++;
    }
    for(ll i=0; i<z.sz; i++)
    {
        if(z.b[i] & x)  ct++;
    }
    if(ct==z.sz)  return 1;
    return 0;
}

void devide(ll pos, ll x)
{
    st z2,z3;
    st z = v[pos];
    if(z.sz==1)  return ;
    ll ct = 0;
    for(ll i=0; i<z.sz; i++)
    {
        if(z.a[i] & x) z2.a.pb(z.a[i]);
        else  z3.a.pb(z.a[i]);
    }
    for(ll i=0; i<z.sz; i++)
    {
        if(z.b[i] & x)  z3.b.pb(z.b[i]);
        else  z2.b.pb(z.b[i]);
    }
    z2.sz = z2.a.size();
    z3.sz = z3.a.size();
    v[pos].a.clear();
    v[pos].b.clear();
    v[pos] = z2;
    if(z3.sz)
    {
        v.pb(z3);
        m++;
    }
    return ;
}

bool Set(ll x)
{    //cout <<endl<<x<<" here "<<m<<endl;
    for(ll i=0; i<m; i++)
    {
        if(!check(i, x))  return 0;
    }
    ll s=m;
    for(ll i=0; i<s; i++)
    {
        devide(i,x);
    }
    return 1;
}

void Please_AC(ll tt)
{
    ll i,j,n;
    v.clear();

    cin >> n;
    st z;
    for(i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        z.a.pb(x);
    }
    for(i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        z.b.pb(x);
    }
    z.sz = n;
    v.pb(z);
    m = 1;
    ll ans = 0;
    ll x;
    x = 1 << 30;
    for(i=30; i>0; i--)
    {
        x = x>>1;  //cout <<endl<<i<<" "<<x<<" "<<ans<<endl;
        if(Set(x)) ans += x;
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
        Please_AC(t);
    return 0;
}
