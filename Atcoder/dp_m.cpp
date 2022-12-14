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

ll n, a[102], dp[102][limit];

ll rec(ll pos, ll rem)
{
    if(rem==0)    return 1;
    if(pos==n)    return 0;

    if(dp[pos][rem] != -1)    return dp[pos][rem];

    dp[pos][rem] = 0;
    dp[pos][rem] = rec(pos+1, rem);
    if(a[pos])
    {
        a[pos]--;
        dp[pos][rem] = (dp[pos][rem]+rec(pos, rem-1))%Mod;
        a[pos]++;
    }
    return dp[pos][rem];
}

void Please_AC(ll tt)
{
    ll i,j,k;
    cin >> n >> k;
    memset(dp, -1, sizeof(dp));
    for(i=0; i<n; i++)
        cin >> a[i];
    cout << rec(0, k) <<endl;
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

