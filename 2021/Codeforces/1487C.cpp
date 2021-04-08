#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 108
using namespace std;

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    m = (n-1)/2;
    ll ct[limit],a[limit][limit];
    memset(ct,0,sizeof(0));

    for(i=0; i<limit; i++)
    {
        ct[i]  = 0;
        for(j=i+1; j<=n+4; j++)
        {
            a[i][j] = 0;
        }
    }

    for(i=1; i<=n; i++)
    {
        ll ok = 1;
        for(j=i+1; j<=n; j++)
        {
            if(ct[i]<m)
            {
                ct[i]++;
                a[i][j] = 1;
            }
            else if(ok && n%2==0)
            {
                a[i][j] = 0;
                ok = 0;
            }
            else if(ct[j]<m)
            {
                ct[j]++;
                a[i][j] = -1;
            }
            else
                a[i][j] = 0;
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            cout <<a[i][j]<<" ";
        }
    }
    cout <<endl;
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
