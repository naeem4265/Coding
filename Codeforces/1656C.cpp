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

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    ll d[n+5];
    bool ok = 1;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(d[i]==1)
            ok = 0;
    }
    if(ok)
    {
        cout <<"YES\n";
        return ;
    }
    if(d[0]==0)
    {
        cout <<"NO\n";
        return ;
    }

    sort(d, d+n);
    if(d[0]==d[n-1])
        ok = 1;
    for(i=0; i<n; i++)
    {
        if(d[i]%2==0)  break;
    }
    if(i==n)  ok = 1;
    for(i=n-1; i>0; i--)
    {
        if((d[i]-1)==d[i-1]) break;
    }
    if(i==0)  ok = 1;

    if(ok)
    {
        cout <<"YES\n";
    }
    else
    {
        cout <<"NO\n";
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
