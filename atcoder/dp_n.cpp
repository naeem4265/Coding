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
ll n,a[405],dp[405][405];

ll rec(ll l, ll r)
{
    if(l==r)   return 0;
    if(dp[l][r] !=-1 )    return dp[l][r];
    a[l+1] += a[l];
    dp[l][r] = a[l+1] + rec(l+1, r);
    a[l+1] -= a[l];
    a[r-1] += a[r];
    dp[l][r] = min(dp[l][r], a[r-1] + rec(l, r-1));
    a[r-1] -= a[r];
    return dp[l][r];
}

void Please_AC(ll tt)
{
    ll i,j;
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for(i=1; i<=n; i++)   cin >> a[i];

    cout << rec(1, n) <<endl;

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

