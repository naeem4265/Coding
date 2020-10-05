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

void solve(int t)
{
    ll i,j,n,m,k;
    cin >> n >>k;
    ll x[n+5],y;
    for(i=0; i<n; i++)
    {
        cin >> x[i] ;
    }
    for(i=0; i<n; i++)
    {
        cin >> y ;
    }
    sort(x,x+n);
    ll dp[n+5];
    dp[n]=0;
    ll dif;
    for(i=n-1,j=n-1; i>=0; i--)
    {
        dif = x[j]-x[i];
        while(dif>k)
        {
            j--;
            dif = x[j]-x[i];
        }
        dp[i]=max(dp[i+1],j-i+1);
    }
    ll ans = 1;
    for(i=0,j=0; i<n-1; i++)
    {
        dif = x[i]-x[j];   //cout <<i<<' '<<j<<endl;
        while(dif>k)
        {
            j++;
            dif = x[i]-x[j];
        }
        ans = max(ans,i-j+1+dp[i+1]);    //cout <<i-j+1<<" "<<dp[i+1]<<' '<<ans<<endl;
    }
    cout <<ans <<endl;
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

