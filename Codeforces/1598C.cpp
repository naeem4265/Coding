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
    ll i,j,n,m=0,k;

    cin >> n;
    ll d[n+5];


    double x = 0, y=(double)n;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        m += d[i];
    }

    if( (2LL*m)%n )
    {
        cout <<"0\n";
        return ;
    }
    m = (2LL*m)/n;
    sort(d,d+n);

    //cout <<m<<endl;   for(i=0; i<n; i++) cout <<d[i]<<" "; cout <<endl;

    ll ans = 0;
    for(i=0; i<n; i++)
    {
        k = m-d[i];
        ll l=i+1,h=n-1,mid,lo=1,ho=0;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(d[mid]>k)
            {
                h = mid-1;
            }
            else if(d[mid]<k)
            {
                l = mid+1;
            }
            else
            {
                ho = mid;
                l = mid+1;
            }
        }
        l=i+1,h=n-1;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(d[mid]<k)
            {
                l = mid+1;
            }
            else if(d[mid]>k)
            {
                h = mid-1;
            }
            else
            {
                h = mid-1;
                lo = mid;
            }
        }
        //cout <<i<<" "<<lo<<" lohi "<<ho<<" "<<ans<<endl;
        ans += max(0LL,(ho-lo)+1);
    }

    cout << ans << endl;

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
