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
    ll a[n+5];
    for(i=0; i<n; i++)
        cin >> a[i];
    cin >> m;
    ll b[m+5];
    for(i=0; i<m; i++)
        cin >> b[i];
    sort(a, a+n);
    sort(b, b+m);
    if(a[n-1]==b[m-1])
    {
        cout <<"Alice\nBob\n";
    }
    else if(a[n-1]>b[m-1])
    {
        cout <<"Alice\nAlice\n";
    }
    else
    {
        cout <<"Bob\nBob\n";
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
