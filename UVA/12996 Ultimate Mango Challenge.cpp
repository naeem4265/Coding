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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;
    ll quan[n+5],abil[n+5],sum=0;
    bool ok = 1;
    for(i=0; i<n; i++)
    {
        cin >> quan[i];
        sum += quan[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> abil[i];
        if(quan[i]>abil[i]) ok=0;
    }
    if(sum > m) ok = 0;
    cout <<"Case "<<t<<": ";
    if(ok)
    {
        cout <<"Yes\n";
    }
    else
        cout <<"No\n";
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
