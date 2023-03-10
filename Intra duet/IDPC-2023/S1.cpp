#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e3+5;
const ll Mod = 1e9+7;
using namespace std;
ll dp[limit][limit];

ll rec(ll n, ll k)
{
    if(!n)  return 1;
    if(k>=limit)   return 0;
    if(dp[n][k])   return dp[n][k];
    dp[n][k] = (rec(n-1, k+1) + ((n-1+k)*rec(n-1, k))%Mod)%Mod;
    //cout <<n<<" "<<k<<" "<<dp[n][k]<<endl;
    return dp[n][k];
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    cout <<rec(n, 0) <<endl;

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

