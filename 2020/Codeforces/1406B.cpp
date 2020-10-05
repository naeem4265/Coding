#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100003
using namespace std;
ll dp[limit][6],D[limit],n;
vector<ll>out;
ll rec(ll pos,ll ct,ll ans)
{          //cout <<pos<<" "<<ct<<" "<<ans<<endl;
    if(ct==0) return ans;
    if(pos==n)
        return ans;
    //if(dp[pos][ct]!=-1) return dp[pos][ct];
    ll mx1=-1e18,mx2=-1e18;
    if(ct<(n-pos))
        mx2 = rec(pos+1,ct,ans);  //cout <<mx2<<" first "<<ct<<" "<<D[pos]<<endl;
    mx1 = rec(pos+1,ct-1,ans*D[pos]);
    return max(mx1,mx2);
}
void solve(int t)
{
    ll i,j,m;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&D[i]);
    }
    sort(D,D+n);
    for(i=0; i<min(n,(ll)10); i++);
    j=i;
    for(i=max(i,n-10); i<n; i++,j++)
        D[j]=D[i];
    n = j;
    printf("%lld\n",rec(0,(ll)5,(ll)1));

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
