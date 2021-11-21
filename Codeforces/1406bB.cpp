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
ll D[n+5];
ll rec(int pos,int ct)
{
    if(ct==0)
        return 1LL;
    ll mx1,mx2=-1e18;
    if(pos<(n-ct))
        mx2 = rec(pos+1,ct);
    mx1 = D[i]*rec(pos+1,ct-1);
    dp[pos][ct] = max(mx1,mx2);
    return dp[pos][ct];
}
void solve(int t)
{
    ll i,j,n,m,ans=1,p=0,ans2=1;
    cin >> n;
    ll D[n+5];
    for(i=0; i<n ;i++)
    {
        cin >> D[i];
    }
    cout <<rec(0,5)<<endl;
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

