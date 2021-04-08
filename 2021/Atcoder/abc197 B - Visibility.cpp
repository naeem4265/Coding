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
    ll i,j,n,m,k,x,y;
    cin >> n >> m >> x >> y;
    string s[n+5];
    for(i=0; i<n; i++)
        cin >> s[i];
    ll ct = 0;
    x--;
    y--;
    for(i=x; i>=0; i--)
    {
        if(s[i][y]=='#') break;
        ct++;
    }
    for(i=x+1; i<n; i++)
    {
        if(s[i][y]=='#') break;
        ct++;
    }
    for(i=y-1; i>=0; i--)
    {
        if(s[x][i]=='#') break;
        ct++;
    }
    for(i=y+1; i<m; i++)
    {
        if(s[x][i]=='#') break;
        ct++;
    }
    cout << ct <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
