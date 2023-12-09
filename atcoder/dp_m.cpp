#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e5+5;
const ll Mod = 1e9+7;
using namespace std;
ll dp[105][limit];

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> k;
    ll d[n+5];
    for(i=0; i<k+2; i++)  dp[0][i] = 1;
    for(i=1; i<=n; i++)    cin >> d[i];
    for(i=1; i<=n; i++)
    {
        dp[i][0] = 1;
        for(j=1; j<=k; j++)
        {
            dp[i][j] = dp[i-1][j];       // cout <<dp[i-1][j]<<" up "<<dp[i-1][j-d[i]-1] <<" "<<j-d[i]-1<<endl;
            if((j-d[i])>0)   dp[i][j] = (dp[i][j] - dp[i-1][j-d[i]-1]+Mod)%Mod;  //cout <<i<<" "<<j<<" "<<dp[i][j] <<endl;
        }
        for(j=1; j<=k; j++)
            dp[i][j] = (dp[i][j] + dp[i][j-1])%Mod;
    }
    cout << (dp[n][k]-dp[n][k-1]+Mod)%Mod <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

