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
    ll i,j,m,k,q;
    ll x;
    scanf("%lld %lld", &m, &x);
    ll rem = m-x;
    ll sz=sqrt(rem);

    vector<ll> v;
    for(i=1; i<=sz; i++)
    {
        if(rem%i) continue;
        if(i>x)
            v.pb(i);
        if((rem/i)>x)
            v.pb(rem/i);
    }
    ll ans = 1e18;
    sz = v.size();
    if(sz)
        sort(v.begin(),v.end());
    for(i=0; i<sz; i++)
    {
        ll l=0,h=sz-1,mid;
        while(l<=h)
        {
            mid = (l+h)/2;
            if((v[i]*v[mid])>=m)
            {
                ans = min(ans, v[i]*v[mid]);
                h = mid-1;
            }
            else
                l = mid+1;
        }
    }
    if(ans>=(ll)1e18) ans = -1;
    printf("%lld\n",ans);

    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
