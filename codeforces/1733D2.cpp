#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll inf=1e18;


void Please_AC(ll tt)
{
    ll i,j,n,m=1e18,k,x,y;
    string a,b;
    cin >> n >> x >> y;
    cin >> a >> b;
    vector<ll> v;
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            v.pb(i);
        }
    }
    v.pb(n+55);
    v.pb(n+55);
    m = v.size();
    if(m&1)
    {
        cout <<-1<<endl;
        return ;
    }
    ll dp[m+5];
    y = y*2LL;
    x = x*2LL;
    for(i=0; i<m+2; i++)   dp[i] = inf;
    dp[0] = 0;

    for(i=0; i<m; i++)
    {
        if(v[i+1]!=v[i]+1)
            dp[i+1] = min(dp[i+1], dp[i]+y/2);
        if(i+1<m)
        {
            dp[i+2] = min(dp[i+2], dp[i]+(v[i+1]-v[i])*x);
            //cout <<i<<" "<<dp[i]<<" "<<dp[i+2]<<endl;
        }
    }
    if(m==0) dp[1] = 0;
    cout << dp[m]/2 <<endl;
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
