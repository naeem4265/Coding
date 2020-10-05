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
    ll i,j,n,m,total_W;
    cin >> n >> total_W;
    total_W = min(total_W,(ll)100005);
    ll W[n+5],tk[n+5],total_tk[n+5][total_W+5];
    for(i=1; i<=n; i++)
        cin >> W[i] >> tk[i];
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=total_W; j++)
        {
            if(i==0 || j==0) total_tk[i][j]=0;
            else if(j>=W[i])
            {
                total_tk[i][j] = max(tk[i]+total_tk[i-1][j-W[i]],total_tk[i-1][j]);
            }
            else total_tk[i][j]=total_tk[i-1][j];
            // cout <<i<<" "<<j<<" "<<W[i]<<' '<<tk[i]<<' '<<total_tk[i][j]<<endl;
        }
    }
    cout << total_tk[n][total_W]<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

