#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1008
using namespace std;
ll d[limit][limit],mn[limit][limit],mx[limit][limit];


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> m;

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
            mn[i][j] = mx[i][j] = 0;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> d[i][j];
            if(i==1)
            {
                mn[i][j] = mn[i][j-1]+d[i][j];
                mx[i][j] = mx[i][j-1]+d[i][j];
            }
            if(j==1)
            {
                mn[i][j] = mn[i-1][j]+d[i][j];
                mx[i][j] = mx[i-1][j]+d[i][j];
            }
        }
    }
    for(i=2; i<=n; i++)
    {
        for(j=2; j<=m; j++)
        {
            mx[i][j] = d[i][j]+max(mx[i-1][j],mx[i][j-1]);
            mn[i][j] = d[i][j]+min(mn[i-1][j],mn[i][j-1]);
        }
    }
    if(mx[n][m]%2 || mn[n][m] > 0 || mx[n][m] < 0)
        cout << "NO\n";
    else
        cout << "YES\n";


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
