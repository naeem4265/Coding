#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

ll ct[limit][33];

ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b);
        b = (b*b);
        p = p/2;
    }
    return ans;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    ll l,r;
    cin >> l >> r;
    ll ans = 0;
    for(i=1; i<30; i++)
    {
        ans = max(ans,ct[r][i]-ct[l-1][i]);
    }
    cout <<r-l+1-ans<<endl;
    //cout <<sum-mx<<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t=1,tt=1;
    cin >> tt;
    memset(ct,0,sizeof(ct));
    for(ll i=1; i<limit; i++)
    {
        t = 1;
        for(ll j=1; j<30; j++)
        {
            ct[i][j] += ct[i-1][j];
            if(i&t)
                ct[i][j]++;
            t*=2LL;
        }
    }

    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
