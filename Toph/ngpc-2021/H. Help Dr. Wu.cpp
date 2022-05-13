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
    string s;
    cin >> n;
    ll d[n+5];
    d[0] = 0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    for(i=n-1; i>0; i--)
    {
        d[i] = d[i]-d[i-1];
    }
    sort(d,d+n);
    for(i=1; i<n; i++)
    {
        if(d[i-1]==d[i])
        {
            cout <<"Lost\n";
            return ;
        }
    }
    cout <<"Won\n";
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
