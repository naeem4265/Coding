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
    cin >> n >> q;
    ll d[n+5];
    for(i=1; i<=n; i++)
        cin >> d[i];
    sort(d+1, d+n+1);
    reverse(d+1, d+n+1);
    ll csum[n+5];
    csum[0] = 0;
    for(i=1; i<=n; i++)
        csum[i] = csum[i-1]+d[i];
    while(q--)
    {
        ll x,y;
        cin >> x >> y;
           //cout <<x<<" "<<y<<" "<<x-y<<" "<<csum[x]<<" "<<csum[x-y]<<endl;
        cout << csum[x]-csum[x-y] <<endl;
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
