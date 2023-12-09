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

bool f(ll i, ll n, ll m)
{
    if(n%i==0)
    {
        if((m-2)%i==0)
            return true;
    }
    if(n%i==1)
    {
        if((m-1)%i==0)
            return true;
    }
    if(n%i==2 )
    {
        if(m%i==0)
            return true;
    }
    return false;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> m;
    ll p = 2LL*(n+m)-4;
    set<ll> ans;
    ans.insert(2);
    for(i=1; i*i<=p; i++)
    {
        if(p%i)  continue;
        if(f(i,n,m) || f(i,m,n))
            ans.insert(i);
        if(f(p/i,n,m)||f(p/i,m,n))
            ans.insert(p/i);
    }
    if(n==m)
        ans.insert(n-1);
    cout << ans.size() <<" ";
    set<ll>:: iterator it;
    for(it=ans.begin(); it!=ans.end(); it++)  cout <<*it<<" ";
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

