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
    cin >> n >> m;
    string s[n+5];

   for(i=0; i<n; i++)    cin >> s[i];
    ll mnu=Mod,mnl=Mod,ok=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='R')
                mnl=min(mnl, j);
        }
    }
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            if(s[i][j]=='R')
            {
                mnu=min(mnu, i);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='R'&& i<= mnu && j<=mnl)
            {
                cout <<"YES\n";
                return ;
            }
        }
    }
    cout <<"NO\n";
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
