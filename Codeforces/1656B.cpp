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

    cin >> n >> k;
    vector<ll> v(n);
    for(i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(i=0; i<n-1; i++)
    {
        m = v[i]+k;
        ll l = i+1, h=n-1,mid;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(v[mid]==m)
            {
                cout <<"YES\n";
                return ;
            }
            if(v[mid]<m)
                l = mid+1;
            else
                h = mid-1;
        }
    }
    cout <<"NO\n";

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
