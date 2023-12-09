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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    ll x,y;
    for(i=0; i<n; i++)
        cin >> d[i];
    cin >> x >> y;
    ll ans = Mod;
    ll l=1,h=Mod;
    while(l<=h)
    {
        m = (l+h)/2;
        ll ct=0;
        for(i=0; i<n; i++)
        {
            if(d[i]>(m*x))
            {
                ll l=1,h=Mod,mid,t=1;
                while(l<=h)
                {
                    mid = (l+h)/2;
                    ll p = max(0LL,m-mid)*x+mid*y;
                    if(d[i]<=p)
                    {
                        h = mid-1;
                        t = mid;
                    }
                    else
                    {
                        l = mid+1;
                    }
                }
                ct += t;
            }
        }
        if(ct>m)
            l = m+1;
        else
        {
            ans = min(ans,m);
            h = m-1;
        }
    }
    cout << ans <<endl;
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
