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
    int i,j,n,m,k;
    cin >> n >> m;
    int R[n+5][m+5],C[m+5][n+5];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> R[i][j];
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> C[i][j];
        }
    }
    int row=Mod;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(C[i][0]==R[j][0])
            {
                row = i; break;
            }
        }
        if(row!=Mod) break;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(C[row][i]==R[j][0])
            {
                for(k=0; k<m; k++)
                {
                    cout <<R[j][k]<<" ";
                }
                cout <<endl;
            }
        }
    }
    return ;
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

