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
    string s;
    cin >> n;
    ll cnt[n+5];
    memset(cnt,0,sizeof(cnt));
    vector<pair<ll,ll> > p(n+1);

    for(i=0; i<n; i++)
    {
        cin >> p[i].first >> p[i].second;
        cnt[p[i].second]++;
    }
    p[n].first=Mod;
    sort(p.begin(),p.end());

    ll ans = n*(n-1)*(n-2)/6;
    for(i=0,j=1; j<=n; j++)
    {
        if(p[i].first!=p[j].first)
        {
            ll len = j-i-1;
            for(; i<j; i++)
            {
                ans -= len*(cnt[p[i].second]-1);
            }
        }
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
