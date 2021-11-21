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

void solve()
{
    ll i,j,n,m,k;
    cin >> n >> m;
    ll A[n+5][m+5];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> A[i][j];
        }
    }
    ll ans=0;
    for(i=1; i<=ceil(n/2.0); i++)
    {
        for(j=1; j<=ceil(m/2.0); j++)
        {      //cout <<i<<' '<<j<<" "<<ans<<endl;
            ll sum,t,x,y;

//            if(i==n-i+1 && j==m-j+1)
//                continue;
//            if(i==n-i+1 || j==m-j+1)
//            {
//                if(i==n-i+1)
//                {
//                    sum = (A[i][j]+A[i][m-j+1]);
//                    t = sum/2;
//                    x = (abs(t-A[i][j])+abs(t-A[i][m-j+1]));
//                    t++;
//                    y = (abs(t-A[i][j])+abs(t-A[i][m-j+1]));
//                    ans+=min(x,y);
//                }
//                else
//                {
//                    sum = (A[i][j]+A[n-i+1][j]);
//                    t = sum/2;
//                    x = (abs(t-A[i][j])+abs(t-A[n-i+1][j]));
//                    t++;
//                    y = (abs(t-A[i][j])+abs(t-A[n-i+1][j]));
//                    ans+=min(x,y);
//                }
//                continue;
//            }
            sum = (A[i][j]+A[n-i+1][j]+A[i][m-j+1]+A[n-i+1][m-j+1]);
            t = sum/4;
            x = (abs(t-A[i][j])+abs(t-A[n-i+1][j])+abs(t-A[i][m-j+1])+abs(t-A[n-i+1][m-j+1]));
            t++;
            y = (abs(t-A[i][j])+abs(t-A[n-i+1][j])+abs(t-A[i][m-j+1])+abs(t-A[n-i+1][m-j+1]));
            ans+=min(x,y);  // cout <<sum<<" "<<min(x,y)<<" hereee "<<ans<<endl;
        }
    }
    cout <<ans<<endl;
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
        solve();
    return 0;
}

