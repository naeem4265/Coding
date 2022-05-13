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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    ll s=0;
    cin >> n;
    ll d[n+5],a[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        s += d[i];
    }
    m = n*(n+1)/2;
    if(s%m)
    {
        cout <<"NO\n";
        return ;
    }
    for(i=0; i<n; i++)
    {
        a[i] = (d[(i-1+n)%n]-d[i] + s/m);
        if(a[i]%n || a[i]<=0)
        {
            cout <<"NO\n";
            return ;
        }
        a[i] /= n;
    }
    cout <<"YES\n";
    for(i=0; i<n; i++)
        cout <<a[i]<<" ";
    cout <<endl;
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
