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
    cin >> n >> m;
    ll d[n+5][m+5];
    ll mx = -1e18,x,y;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> d[i][j];
            if(mx<d[i][j])
            {
                mx = d[i][j];
                x = i;
                y = j;
            }
        }
    }
    x = max(x, n-x+1);
    y = max(y, m-y+1);
    cout <<x*y<<endl;


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
        Please_AC(t);
    return 0;
}
