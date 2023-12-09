#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    scanf("%lld %lld", &n, &m);
    ll d[n+5][m+5];
    memset(d,0,sizeof(d));

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%lld", &d[i][j]);
        }
    }
    ll A[4];
    scanf("%lld %lld %lld", &A[0], &A[1], &A[2]);
    sort(A,A+3);

    for(i=1; i<=n; i++)
    {
        d[i][m+1] = d[i-1][m+1];
        for(j=1; j<=m; j++)
        {
            d[i][m+1] += d[i][j];
        }
    }
    for(i=1; i<=m; i++)
    {
        ll sum = 0;
        for(j=1; j<=n; j++)
        {
            sum += d[j][i];
        }
        d[n+1][i] = d[n+1][i-1]+sum;
    }
    ll ans = 0;
    ll B[4];
    for(i=1; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            B[0] = d[i][m+1];
            B[1] = d[j][m+1]-B[0];
            B[2] = d[n][m+1]-d[j][m+1];
            sort(B,B+3);   //cout <<i<<" "<<j<<" "<<B[0]<<" "<<B[1]<<" "<<B[2]<<endl;
            for(k=0; k<3; k++)
            {
                if(A[k]!=B[k])   break;
            }
            if(k==3)
                ans++;
        }
    }
    for(i=1; i<m; i++)
    {
        for(j=i+1; j<m; j++)
        {
            B[0] = d[n+1][i];
            B[1] = d[n+1][j]-B[0];
            B[2] = d[n+1][m]-d[n+1][j];
            sort(B,B+3);      //cout <<i<<" "<<j<<" "<<B[0]<<" "<<B[1]<<" "<<B[2]<<endl;
            for(k=0; k<3; k++)
            {
                if(A[k]!=B[k])   break;
            }
            if(k==3)
                ans++;
        }
    }
    printf("%lld\n", ans);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

