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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m >> k;
    for(i=0; i<n; i++)
    {
        cin >> x[i];
    }
    sort(x,x+n);
    for(i=0; i<m; i++)
    {
        cin >> y[i];
    }
    sort(y,y+m);

    for(i=0; i<k; i++)
    {
        cin >> x1[i] >> y1[i];
    }
    sort1;
    for(i=1; i<n; i++)
    {

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