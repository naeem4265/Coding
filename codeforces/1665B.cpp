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
    string s;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    sort(d,d+n);
    ll ct=0;
    for(i=0,j=0; i<n; i++)
    {
        if(d[i]!=d[j])
        {
            ct = max(ct, i-j);
            j = i;
        }
    }
    ct = max(ct, i-j);
    if(ct==n)
    {
        cout <<0<<endl;
        return ;
    }
    ll ans = 0;
    n -= ct;
    while(n)
    {
        ans++;
        ans += min(n, ct);
        n -= min(n, ct);
        ct *= 2LL;
    }
    cout << ans <<endl;

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
