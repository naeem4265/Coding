#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1008
using namespace std;
ll D[limit][limit];
ll sum[limit][limit];
ll mx[limit][limit];
ll mxt,mxt2,ct;
void solve(ll t)
{
    ll i,j,n,m,k,l,x,y;
    cin >> n >> m >> k >> l;
    for(i=0; i<n+5; i++)
    {
        for(j=0; j<m+5; j++)
        {
            D[i][j]=0;
            sum[i][j]=0;
            mx[i][j]=0;
        }
    }
    for(i=1; i<=n ;i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> D[i][j];
            sum[i][j] = sum[i][j-1]+D[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            ll temp = 0,L,R,p;
            L = max(k,j);
            R = min(m,j+k-1);
            for(p=L; p<=R; p++)
            {
                temp = max(sum[i][p]-sum[i][p-k],temp); //cout <<i<<" "<<j<<" "<<p<<" "<<temp<<endl;
            }
            D[i][j] = temp;
        }
    }
//    for(i=1; i<=n ;i++)
//    {
//        for(j=1; j<=m; j++)
//        {
//            cout <<D[i][j]<<" ";
//        }
//        cout <<endl;
//    }
    for(i=n; i>=0; i--)
    {
        for(j=1; j<=m; j++)
        {
            ll temp = 0,L,R,p;
            L = max((ll)1,j-l);
            R = min(m,j+l);
            for(p=L; p<=R; p++)
            {
                temp = max(D[i][j]+mx[i+1][p],temp);  //cout <<i<<" "<<j<<" "<<p<<" "<<temp<<endl;
            }
            mx[i][j] = temp;
        }
    }
//    for(i=1; i<=n ;i++)
//    {
//        for(j=1; j<=m; j++)
//        {
//            cout <<mx[i][j]<<" ";
//        }
//        cout <<endl;
//    }
    mxt = 0;
    for(i=1; i<=m; i++)
        mxt = max(mxt,mx[1][i]);

    cout << mxt <<endl;
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

///wrong answer
