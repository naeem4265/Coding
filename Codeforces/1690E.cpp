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

    cin >> n >> k;
    ll d;
    vector<pair<ll,ll> > v(n);
    for(i=0; i<n; i++)
    {
        cin >> d;
        v[i].first = d%k;
        v[i].second = d;
    }
    sort(v.begin(), v.end());
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));
    ll ans = 0;
    for(i=0; i<n; i+=2)
    {
        ans += ((v[i].second/k)+(v[i+1].second/k));
    }
    for(i=n-1,j=0; i>j; i--)
    {
        while(j<i && (v[i].first+v[j].first)<k)
            j++;
        if(j<i)
        {
            ans++;
            //cout <<v[i].first<<" "<<v[i].second<<" "<<v[j].first<<" "<<v[j].second<<endl;
            j++;
        }
    }

    cout << ans <<endl;
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
