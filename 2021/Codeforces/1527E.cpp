#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 35005
using namespace std;
ll n,k;
ll d[limit];
vector<ll> occ[limit];
ll dp[105][limit];

ll BSL(ll idx, ll pos)
{
    ll ans = 0;
    ll l=0,h=occ[idx].size()-1,m;
    while(l<=h)
    {
        m = (l+h)/2;
        if(occ[idx][m]>pos)
            h = m-1;
        else
        {
            ans = occ[idx][m];
            l = m+1;
        }
    }
    return ans;
}
ll BSU(ll idx, ll pos)
{
    ll ans = 0;
    ll l=0,h=occ[idx].size()-1,m;
    while(l<=h)
    {
        m = (l+h)/2;
        if(occ[idx][m]<=pos)
            l = m+1;
        else
        {
            ans = occ[idx][m];
            h = m-1;
        }
    }
    return ans;
}

ll rec(ll l,ll r, ll seg)
{
    if(r==n && seg==k) return 0;
    if(r<n && seg==k) return 1e18;
    if((n-r)<(k-seg)) return 1e18;

    if(dp[seg][r]!=-1) return dp[seg][r];

    ll mn = 1e18,x,sum=0;
    for(ll i=r+1; i<=n; i++)
    {
        x = rec(r+1,i,seg+1);  //cout <<x<<endl;

        ll left = BSU(d[i],r);  //cout <<r<<" "<<i<<" "<<d[i]<<" "<<left<<" \n";
        if(left!=i)
        {
            ll middle = BSL(d[i],i-1);
            sum += (i-middle);

        }
        if(mn>(sum+x))
        {
            mn = sum+x;
        }                     //cout<<i<<" " <<sum<<" "<< mn << endl;
    }          //cout << r <<" "<<seg<<" minans "<<mn<<endl;
    return dp[seg][r] = mn;
}

void solve(ll t)
{
    ll i,j;
    memset(dp,-1,sizeof(dp));
    scanf("%d %d", &n, &k);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &d[i]);
        occ[d[i]].pb(i);
    }
    rec(0,0,0);

    printf("%d\n",dp[0][0]);
    return ;
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
