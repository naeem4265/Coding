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
ll cost[limit];

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    ll c,d,h,C,l,r,ans;

    cin >> n >> C;
    ll mx = 2e18;

    for(i=0; i<n; i++)
    {
        cin >> c >> d >> h;
        cost[c] = max(cost[c], d*h);
    }

    for(i=1; i<=C; i++)
    {
        for(j=i,k=1; j<=C; j+=i,k++)
        {
            cost[j] = max(cost[j], cost[i]*k);
        }
    }
    for(i=1; i<=C; i++)
    {
        cost[i] = max(cost[i], cost[i-1]);
    }

    cin >> q;
    while(q--)
    {
        cin >> d >> h;
        d = d*h;
        l = 1;
        r = C;
        ans = -1;
        while(l<=r)
        {
            m = (l+r)/2;
            if( cost[m]>d )
            {
                r = m-1;
                ans = m;
            }
            else
            {
                l = m+1;
            }
        }
        cout << ans <<" ";
    }
    cout <<endl;

    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
