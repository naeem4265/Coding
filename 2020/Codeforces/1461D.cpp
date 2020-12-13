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
set<ll> out;

void rec(vector<ll> v)
{
    vector<ll>a,b;
    a.clear();
    b.clear();
    ll i,mx=0,mn=Mod,sum=0,sz=v.size();
    for(i=v.size()-1; i>=0; i--)
    {
        if(v[i]>mx)
            mx= v[i];
        if(v[i]<mn)
            mn = v[i];
        sum += v[i];
    }
    out.insert(sum);
    mn = (mx+mn)/2;
    for(i=0; i<sz; i++)
    {
        if(v[i]<=mn)
            a.pb(v[i]);
        else
            b.pb(v[i]);
    }
    if(a.size()==0 || b.size()==0) return ;
    rec(a);
    rec(b);
}

void solve(ll t)
{
    ll i,j,n,m,k,q;
    cin >> n >> q;
    vector<ll> v(n);
    for(i=0; i<n; i++)
        cin >> v[i];
    out.clear();
    rec(v);

    for(i=0; i<q; i++)
    {
        ll a;
        cin >> a;
        if(out.find(a)==out.end())
            cout <<"No\n";
        else
            cout <<"Yes\n";
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

