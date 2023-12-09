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

    ll d[5][5];
    for(i=0; i<3; i++)
        for(j=0; j<4; j++)
            cin >> d[i][j];
    ll sum = 0, mx, total = 1000000;
    for(j=0; j<4; j++)
    {
        mx = 1e9;
        for(i=0; i<3; i++)
        {
            mx = min(mx, d[i][j]);
        }
        sum += mx;
    }
    cout <<"Case #"<<tt<<": ";
    if(sum < total)
    {
        cout <<"IMPOSSIBLE\n";
        return ;
    }

    for(j=0; j<4; j++)
    {
        mx = 1e9;
        for(i=0; i<3; i++)
        {
            mx = min(mx, d[i][j]);
        }
        cout <<min(mx, total);
        if(j<3) cout <<" ";
        total -= min(mx, total);
    }
    cout <<endl;
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
