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
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    if(n%2==0)
    {
        cout <<-1<<endl;
        return ;
    }
    ll M[n+5][n+5];
    for(i=0; i<n+5; i++)
    {
        for(j=0; j<n+5; j++)
        {
            M[i][j] = 0;
        }
    }

    for(i=1; i<=n; i++)
        M[i][i] = i;
    m = n/2+2;
    for(i=1; i<=n; i++)
    {
        if(i&1)
        {
            for(k=i,j=1; k>0 && j<=n; j++,k--)
            {
                M[k][j] = (k+j)/2;
            }
        }
        else
        {
            for(k=i,j=1; k>0 && j<=n; j++,k--)
            {
                M[k][j] = m;
            }
            m++;
        }
    }
    m = 1;
    for(i=1; i<=n; i++)
    {
        if(i&1)
        {
            for(k=i,j=n; k<=n && j>0; j--,k++)
            {
                M[k][j] = (k+j)/2;
            }
        }
        else
        {
            for(k=i,j=n; k<=n && j>0; j--,k++)
            {
                M[k][j] = m;
            }
            m++;
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout <<M[i][j]<<" ";
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
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
