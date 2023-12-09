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
#define limit 1000008
using namespace std;

set<ll> v;

void fun(ll A, ll B, ll a, ll b)
{
    ll ct=0;
        ct = abs(a-A);

    for(ll i=min(B,a); i>=0; i--)
    {
        ll x = i;
        if( A<(a-i)) break;
        ll y = b-(B-i);
        v.insert(x+y);
          //cout <<A<<" "<<B<<" "<<a<<" "<<b<<" "<<ct<<" "<<a-i<<endl;
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    v.clear();
    ll a,b;
    cin >> a >> b;
    n = a+b;
    if(n&1)
    {
        fun(n/2, 1+n/2, a, b);
        fun(1+n/2, n/2, a, b);
    }
    else
    {
        fun(n/2,n/2,a,b);
    }
    cout << v.size() << endl;
    set<ll>:: iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout <<*it<<" ";
    }
    cout << endl;
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
