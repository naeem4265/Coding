#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 4008
using namespace std;
ll dp[limit][limit],D[limit],m,k;

ll rec(ll pos,ll w)
{
    if(w>=k) return w-k;
    if(pos>=m) return Mod;
    if(dp[pos][w]!=-1) return dp[pos][w];
    ll x,y;
    x = rec(pos+1,w);
    y = rec(pos+1,w+D[pos]);
    return dp[pos][w] = min(x,y);
}

void solve(ll tc)
{
    ll i,j,n;
    memset(dp,-1,sizeof(dp));

    cin >> n >> k;
    m = n;
    for(i=0; i<n; i++)
        cin >> D[i];
    sort(D,D+n);
    reverse(D,D+n);
    ll sum=0;
    for(i=0; i<n; i++)
    {
        sum += D[i];
        if(sum >= 2*k)
        {
            m = i+1;
            break;
        }
    }
    ll x = rec(0,0);
    sum -= (k+x);      //cout <<x<< " "<<sum<<" "<<m<<endl;
    if(sum>=k)
    {
        cout <<m<<endl;
        return ;
    }
    for(i=m; i<n; i++)
    {
        sum += D[i];
        if(sum>=k)
        {
            cout <<i+1<<endl;
            return ;
        }
    }
    cout <<-1<<endl;
    return ;
}
int  main()
{
   Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

