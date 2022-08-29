#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
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
    vector<ll> v(n);
    ll sum = 0;
    for(i=0; i<n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());

    cin >> q;
    while(q--)
    {
        ll x, y, ans=1e18;
        cin >> x >> y;
        ll l=0,h=n-1,m, take=v[0];
        while(l<=h)
        {
            m = (l+h)/2;
            if(v[m]<=x)
            {
                take = v[m];
                l = m+1;
            }
            else
                h = m-1;
        }
        ans = max(0LL, y - sum + take) + max(0LL, x-take);
        l=0, h=n-1, take=1e18;
        while(l<=h)
        {
            m = (l+h)/2;
            if(v[m]>=x)
            {
                take = v[m];
                h = m-1;
            }
            else
                l = m+1;
        }
        ans = min(ans, max(0LL, y - sum + take));
        cout << ans <<endl;
    }


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
//    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
