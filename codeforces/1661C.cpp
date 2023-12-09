#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define limit 1000008
using namespace std;

ll bs(ll d[], ll n, ll mx)
{
    ll i,j,l,h,m, ans = 1e18;
    l = 0, h = 1e18;
    while(l<=h)
    {
        m = (l+h)/2;
        ll one = (m+1)/2;
        ll two = m/2;
        for(i=0; i<n; i++)
        {
            ll x = mx-d[i];
            ll y = min(x/2, two);
            two -= y;
            x -= 2LL*y;
            y = min(x, one);
            one -= y;
            x -= y;
            if(x)   break;
        }
        if(i<n)
            l = m+1;
        else
        {
            h = m-1;
            ans = m;
        }
    }
    return ans;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    sort(d, d+n);
    ll mx = d[n-1];
    ll ans = bs(d, n, mx);
    mx++;
    cout << min(ans, bs(d,n,mx)) <<endl;
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
        solve(t);
    return 0;
}
