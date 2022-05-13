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
#define limit 1008
using namespace std;

ll rec[limit];
ll d[1005],c[1005];
ll n;
ll dp[1005][20008];

ll r(ll pos, ll k)
{
    if(pos==n)  return 0;
    if(dp[pos][k]!=-1)
        return dp[pos][k];
    ll x = r(pos+1,k),y=0;
    if(k>=d[pos])
    {
        y = c[pos]+r(pos+1, k-d[pos]);
    }
    if(y>x)  x = y;
    return dp[pos][k] = x;
}

void solve(ll tt)
{
    ll i,j,k,m;
    scanf("%lld %lld", &n, &k);
    //cin >> n >> k;
    ll ct =0,sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%lld", &m);
        d[i] = rec[m];
        ct += rec[m];
    }

    for(i=0; i<n; i++)
    {
        scanf("%lld", &c[i]);
        sum += c[i];
    }

    if(ct<=k)
    {
        printf("%lld\n", sum);
        return ;
    }

    ///0-1 knapsack O(n*W), m(W)
    ll dpp[k+5];
    memset(dpp,0,sizeof(dpp));
    for(i=0; i<n; i++)
    {
        for(j=k; j>=d[i]; j--)
        {
            dpp[j] = max(dpp[j], c[i]+dpp[j-d[i]]); // cout <<j<<" "<<dpp[j]<<endl;
        }
    }
    printf("%lld\n", dpp[k]);
    return ;

    m = n*20;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            dp[i][j] = -1;
    }

    /// recurcsive dp O(n*k), m(n*n*12);
    printf("%lld\n", r(0,k));
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    ll i;

    for(i=2; i<limit; i++)
        rec[i] = Mod;
    rec[0] = 0;
    rec[1] = 0;
    rec[2] = 1;

    for(i=2; i<limit; i++)
    {
        for(ll j=1; j<=i; j++)
        {
            ll x = i+i/j;
            if(x<limit){
                rec[x] = min(rec[x], rec[i]+1);  //cout <<i<<" "<<rec[i]<<" "<<x<<" "<<rec[x]<<endl;
            }
        }
    }
    //for(i=1; i<limit; i++)    cout <<i<<" "<<rec[i]<<endl;

    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
