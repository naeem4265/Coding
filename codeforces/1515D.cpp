#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k,l,r;
    string s;
    cin >> n >> l >> r;
    ll ans = 0,a;
    ll ct[n+5];
    memset(ct,0,sizeof(ct));
    if(l<=r)
    {
        for(i=0; i<l; i++)
        {
            cin >> a;
            ct[a]--;
        }
        for(; i<n; i++)
        {
            cin >> a;
            ct[a]++;
        }
        k = (r-l)/2;
        ll x,y;
        for(i=1; i<=n; i++)
        {
            if(ct[i]<=0) continue;

            x = ct[i]/2;
            y = min(x,k);
            ans += y;
            k -= y;
            ct[i] -= y*2;
        }
        ans += k;
        x = 0;
        for(i=1; i<=n; i++)
        {
            x += abs(ct[i]);
        }
        ans += x/2;
        cout << ans <<endl;
    }
    else
    {
        for(i=0; i<l; i++)
        {
            cin >> a;
            ct[a]++;
        }
        for(; i<n; i++)
        {
            cin >> a;
            ct[a]--;
        }
        k = (l-r)/2;
        ll x,y;
        for(i=1; i<=n; i++)
        {
            if(ct[i]<=0) continue;

            x = ct[i]/2;
            y = min(x,k);
            ans += y;
            k -= y;
            ct[i] -= y*2;
        }
        ans += k;
        x = 0;
        for(i=1; i<=n; i++)
        {
            x += abs(ct[i]);
        }
        ans += x/2;
        cout << ans <<endl;
    }
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
