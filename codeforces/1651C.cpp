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
ll n;

ll BSL(ll x,ll a[])
{
    ll l=0, h = n-1, m,lst=1e18;;
    while(l<=h)
    {
        m = (l+h)/2;
        if( a[m]<=x )
        {
            lst = a[m];
            l = m+1;
        }
        else
        {
            h = m-1;
        }
    }
    return abs(x-lst);
}
ll BSU(ll x,ll a[])
{
    ll l=0, h = n-1, m,lst=1e18;;
    while(l<=h)
    {
        m = (l+h)/2;
        if( a[m]>=x )
        {
            lst = a[m];
            h = m-1;
        }
        else
        {
            l = m+1;
        }
    }
    return abs(x-lst);
}

void solve(ll tt)
{
    ll i,j,m,k,q;

    cin >> n;
    ll d[2][n+5];
    ll mnl[2][n+5], mnr[2][n+5];
    ll a[n+5],b[n+5];

    for(i=0; i<n; i++)
    {
        cin >> d[0][i];
        a[i] = d[0][i];
    }
    for(i=0; i<n; i++)
    {
        cin >> d[1][i];
        b[i] = d[1][i];
    }
    sort(a, a+n);
    sort(b, b+n);

    ll x,y;
    for(i=0; i<n; i++)
    {
        x = d[0][i];
        y = BSL(x, b);
        y = min(y, BSU(x,b));
        mnl[0][i] = y;
        if(i)
            mnl[0][i] = min(mnl[0][i-1], mnl[0][i]);

        x = d[1][i];
        y = BSL(x, a);
        y = min(y, BSU(x,a));
        mnl[1][i] = y;
        if(i)
            mnl[1][i] = min(mnl[1][i-1], mnl[1][i]);
            //cout <<i<<" "<<mnl[0][i]<<" "<<mnl[1][i]<<endl;
    }

    for(i=n-1; i>=0; i--)
    {
        x = d[0][i];
        y = BSL(x, b);
        y = min(y, BSU(x,b));
        mnr[0][i] = y;
        if(i<(n-1))
            mnr[0][i] = min(mnr[0][i+1], mnr[0][i]);
        x = d[1][i];
        y = BSL(x, a);
        y = min(y, BSU(x,a));
        mnr[1][i] = y;
        if(i<(n-1))
            mnr[1][i] = min(mnr[1][i+1], mnr[1][i]);
            //cout <<i<<" "<<mnr[0][i]<<" "<<mnr[1][i]<<endl;
    }
    ll ans1 = 1e18, ans2 = 1e18, ans = abs(d[0][0]-d[1][0])+abs(d[0][n-1]-d[1][n-1]);
//    for(i=1; i<n-1; i++)
//    {
//        ans = min(ans, abs(d[0][0]-d[1][0])+mnr[0][i+1]+mnr[1][i+1]);
//        ans = min(ans, abs(d[0][n-1]-d[1][n-1])+mnl[0][i-1]+mnl[1][i-1]);
//        ans1 = min(ans1, mnl[0][i-1]+mnr[0][i+1]);
//        ans2 = min(ans2, mnl[1][i-1]+mnr[1][i+1]);
//    }
    ans = min(ans, abs(d[0][0]-d[1][0])+mnr[0][n-1]+mnr[1][n-1]);
    ans = min(ans, abs(d[0][n-1]-d[1][n-1])+mnl[0][0]+mnl[1][0]);
    ans = min(ans, mnl[0][0]+mnr[0][n-1]+mnl[1][0]+mnr[1][n-1]);

    ans = min(ans, abs(d[0][0]-d[1][n-1])+abs(d[0][n-1]-d[1][0]));
    ans = min(ans, abs(d[0][0]-d[1][n-1])+mnr[0][n-1]+mnl[1][0]);
    ans = min(ans, abs(d[0][n-1]-d[1][0])+mnl[0][0]+mnr[1][n-1]);

    cout << ans <<endl;
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
