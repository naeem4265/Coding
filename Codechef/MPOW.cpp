#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

ll dp[limit];

void Set()
{
    dp[1] = 1;
    for(ll i=2; i<limit; i++)
    {
        dp[i] = (dp[i-1]*i)%Mod;
    }
}
void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll D[n+5];
    D[0] = Mod;
    for(i=1; i<=n; i++)
        cin >> D[i];
    ll r=n,ans=0;
    for(i=n-1; i>=0; i--)
    {
        if(D[i]>D[r])
        {
            ans = max(ans,r-i);
            r = i;
        }
    }
    cout <<dp[ans]<<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    Set();
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


