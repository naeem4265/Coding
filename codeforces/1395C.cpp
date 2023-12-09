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
    int n,m,i,j;
    cin >> n >> m;
    int A[n+5],B[m+5];
    for(i=0; i<n; i++)
        cin >> A[i];
    for(i=0; i<m; i++)
        cin >> B[i];
    for(i=0; i<513; i++)
    {
        for(j=0; j<n; j++)
        {
            for(t=0; t<m; t++)
            {
                if(((A[j]&B[t])|i)==i)
                    break;
            }
            if(t==m)
                break;
        }
        if(j==n)
        {
            cout <<i<<endl;
            return ;
        }
       // cout<<i<<endl;
    }
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


