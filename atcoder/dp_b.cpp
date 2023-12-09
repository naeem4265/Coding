#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e5+2;
const ll Mod = 1e9+7;
using namespace std;

ll n,k,h[limit], dp[limit];

ll rec(ll pos)
{
	if(pos==n)   return 0;
	if(dp[pos] !=-1)   return dp[pos];
	dp[pos] = 1e16;
	for(ll i=1; i<=k; i++)
	{
        if(pos+i > n)   break;
		dp[pos] = min(dp[pos], abs(h[pos]-h[pos+i])+rec(pos+i));
	}
	return dp[pos];
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n >> k;
    for(i=1; i<=n; i++)
    {
        cin >> h[i];
    }
    memset(dp, -1, sizeof(dp));

    cout << rec(1) <<endl;

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

