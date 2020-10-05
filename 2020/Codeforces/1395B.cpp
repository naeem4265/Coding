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
    int a,k,i,j,n,mx=0,ct=1,sum=0;
    int m,x,y;
    cin >> n >> m >> x >> y;
    for(i=x; i<=n; i++)
        cout <<i<<" "<<y<<endl;
    for(i=x-1; i>0; i--)
        cout <<i<<" "<<y<<endl;
    for(j=y+1; j<=m; j++)
        cout <<1<<" "<<j<<endl;
    for(j=y-1; j>0; j--)
        cout <<1<<" "<<j<<endl;
    for(i=2; i<=n; i++)
    {
        if(i&1)
        for(j=m; j>0; j--)
        {
            if(j==y) continue;
            cout <<i<<" "<<j<<endl;
        }
        else
        for(j=1; j<=m; j++)
        {
            if(j==y) continue;
            cout <<i<<" "<<j<<endl;
        }
    }
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

