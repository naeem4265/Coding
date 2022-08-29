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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> m;
    ll a[m+5];
    for(i=0; i<m; i++)
    {
        cin >> a[i];
    }
    sort(a, a+m);
    vector<ll> v;
    for(i=1; i<m; i++)
    {
        v.pb(a[i]-a[i-1]-1);
    }
    v.pb(n-a[m-1]+a[0]-1);
    sort(v.begin(), v.end());
    ll ans = 0;
    ll infc=0;
    for(i=v.size()-1; i>=0; i--)
    {
        if((v[i]-infc)==1LL)
            ans+=1;
        else
            ans += max(0LL, v[i]-infc-1);
        infc += 4LL;  // cout <<i<<" "<<ans<<" "<<infc<<" "<<v[i]<<endl;
    }
    cout <<n-ans<<endl;

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
        Please_AC(t);
    return 0;
}
