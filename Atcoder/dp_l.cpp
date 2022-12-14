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
ll n, a[3005];
ll dp[2][3005][3005];

ll rec(bool Taro, ll left, ll right)
{
    if(left>right)    return 0;
    if(dp[Taro][left][right] != -1)   return dp[Taro][left][right];
    if(Taro)
    {
        return dp[Taro][left][right] = max(rec(0, left+1, right)+a[left], rec(0, left, right-1)+a[right]);
    }
    else
    {
        return dp[Taro][left][right] = min(rec(1, left+1, right)-a[left], rec(1, left, right-1)-a[right]);
    }
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    cout << rec(1, 1, n) <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

