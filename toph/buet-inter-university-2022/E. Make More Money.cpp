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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)  cin >> d[i];

    ll csum[n+5];
    csum[n-1] = d[n-1];
    for(i=n-2; i>=0; i--)
    {
        csum[i] = max(d[i], csum[i+1]+2LL*d[i]);
    }
    ll ans = d[0],sum=0;
    for(i=0; i<n; i++)
    {
        ans = max(ans, sum+csum[i]);
        sum += d[i];
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
