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

void solve(int t)
{
    int a,k,i,j,n,m,mx=0,ct=0,sum=0;
    cin >> n >> m;
    char ch[n+5][m+5];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            cin >> ch[i][j];
    }
    for(i=0; i<n; i++)
    {
        if(ch[i][m-1]=='R')
            ct++;
    }
    for(i=0; i<m; i++)
    {
        if(ch[n-1][i]=='D')
            ct++;
    }
    cout <<ct<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

