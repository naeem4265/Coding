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
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    vector<pair <ll,ll> > v(n+1);

    v[0].first = v[0].second = 1;
    for(i=1; i<=n; i++)
    {
        cin >> v[i].first ;
    }
    for(i=1; i<=n; i++)
    {
        cin >> v[i].second ;
    }
    sort(v.begin(),v.end());
    ll ans = 0;
    for(i=1; i<=n; i++)
    {
        ll left = (v[i].first-v[i-1].first)-(v[i].second-v[i-1].second);
        ll right = (v[i].first-v[i-1].first)- left;
        if(!left && (v[i-1].first+v[i-1].second)%2==0)
            ans += right;
        ans += (left/2);
        if(left&1 && (v[i-1].first+v[i-1].second)&1)
            ans++;
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
