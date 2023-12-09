#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)

const ll Mod = 998244353;
using namespace std;

ll dp[302][180005],d[302], n,k;

ll rec(ll pos, ll val)
{
    if(pos==(n-1))   return 1;
    ll temp = val;
    if(temp<0)    temp = 180002+val;
    if(dp[pos][temp] != -1)    return dp[pos][temp];
    ll x = rec(pos+1, val+d[pos+1]);
    ll y = 0;
    if(val)
        y = rec(pos+1, val-d[pos+1]);
    return dp[pos][temp] = (x+y)%Mod;
}

int  main()
{
    Fast
    ll m = 180005,i,j;
    for(i=0; i<302; i++)
    {
        for(j=0; j<m; j++)
            dp[i][j] = -1;
    }

    cin >> n;
    for(i=0; i<n; i++)  cin >> d[i];
    cout << rec(1, d[1]) <<endl;
    return 0;
}

