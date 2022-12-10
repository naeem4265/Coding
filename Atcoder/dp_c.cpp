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

ll n, dp[limit][8];
ll val[limit][4];

ll rec(ll pos, ll free)
{
	if(pos==n)   return 0;
	if(dp[pos][free] !=-1)   return dp[pos][free];
	dp[pos][free] = 0;
	for(ll i=0; i<3; i++)
	{
		if((1<<i)&free )
		{
			dp[pos][free] = max(dp[pos][free], val[pos][i] + rec(pos+1, 7-(1<<i)));
		}
	}
	return dp[pos][free];
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> val[i][0] >> val[i][1] >> val[i][2];
    }
    memset(dp, -1, sizeof(dp));
    cout << rec(0, (1 << 3) - 1) <<endl;

    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
