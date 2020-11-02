#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 208
using namespace std;
int D[limit],dp[limit][2*limit],n;

int rec(int pos,int T)
{
    if(pos==n) return 0;
    if(T> 2*n) return Mod;
    if(dp[pos][T]!=-1) return dp[pos][T];

    return dp[pos][T] = min(rec(pos,T+1),abs(D[pos]-T)+rec(pos+1,T+1));
}

void solve(int t)
{
    cin >> n ;
    memset(dp,-1,sizeof(dp));
    for(int i=0; i<n; i++)
    {
        cin >> D[i];
    }
    sort(D,D+n);
    cout <<rec(0,1)<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

