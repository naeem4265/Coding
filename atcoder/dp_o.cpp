#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

ll n, dp[22][1<<22];
bool comp[22][22];

ll rec(ll men, ll free)
{            //cout <<men<<" "<<free<<endl;
	if(men==n)   return 1;
	if(dp[men][free] !=-1)   return dp[men][free];
	dp[men][free] = 0;
	for(ll i=0; i<n; i++)
	{
		if(comp[men][i] && (1<<i)&free )
		{
			dp[men][free] = (dp[men][free]+rec(men+1, free-(1<<i)))%Mod;
		}
	}                 //cout <<men<<" "<<free<<" "<<dp[men][free]<<endl;
	return dp[men][free];
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n;
    for(i=0; i<n; i++)
    {
    	for(j=0; j<n; j++)
    		cin >> comp[i][j];
    }
    memset(dp, -1, sizeof(dp));
    cout << rec(0, (1 << n) - 1) <<endl;

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
