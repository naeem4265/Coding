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

    cin >> n >> m;

    ll ct[m+5],coin[n+5];

    for(i=0; i<n; i++)
        cin >> coin[i];

    memset(ct,0,sizeof(ct));
    ct[0] = 1;

    for(j=0; j<n; j++)
    {
        for(i=1; i<=m; i++)
        {
            if( i<coin[j] )  continue;

            ct[i] = (ct[i]+ct[i-coin[j]])%Mod;
        }
    }

    cout << ct[m] << endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
