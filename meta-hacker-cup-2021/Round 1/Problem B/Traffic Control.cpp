#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("traffic_control_input.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,a,b;

    cin >> n >> m >> a >> b;

    cout <<"Case #"<<t<<": ";

    if((n+m-1)>a || (n+m-1)>b)
    {
        cout <<"Impossible\n";
        return ;
    }
    ll M[n+2][m+2];
    for(i=1; i<m; i++)
    {
        M[1][i] = 1;
    }
    for(i=1; i<m; i++)
    {
        M[n][i] = 1;
    }
    for(i=1; i<=n; i++)
    {
        M[i][1] = 1;
    }
    M[n][m] = a-(n+m-2);
    M[1][m] = b-(n+m-2);
    for(i=2; i<n; i++)
    {
        for(j=2; j<=m; j++)
        {
            M[i][j] = 1000;
        }
    }

    cout <<"Possible\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout <<M[i][j];
            if(j!=m) cout <<' ';
        }
        cout <<'\n';
    }

    return ;
}
int  main()
{
//    Fast
    Freed
    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
