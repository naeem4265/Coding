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
    int i,j,n,m,temp=1;
    cin >> n;
    int mat[n+5][n+5];
    for(i=n,j=1; i>0; i-- ,j++)
    {
        mat[1][i] = temp;
        temp += j;
    }
    for(i=2,j=n-1; i<=n; i++,j--)
    {
        mat[i][1] = temp;
        temp += j;
    }
    mat[1][0] = mat[1][n];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i!=1 && j!=1)
                mat[i][j] = mat[i-1][j-1]+1;

            cout <<mat[i][j]<<" ";
        }
        cout <<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


