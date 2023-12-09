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

void solve(ll t)
{
    ll i,j,n,m,k;

    cin >> n >> k;

    ll d[n+1];

    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    sort(d,d+n);

    ll ans=d[n-1];
    ll l=1,h=d[n-1];
    while(l<=h)
    {
        ll mid = (l+h)/2;
        ll ct=0;
        for(i=0; i<n; i++)
        {
            ct += d[i]/mid;
            if( d[i]%mid==0 ) ct--;
        }
        if( ct<=k )
        {
            ans = min(ans,mid);
            h = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout <<"Case #"<<t<<": "<<ans<<endl;


    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

