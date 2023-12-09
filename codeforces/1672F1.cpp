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
    ll d[n+5];
    vector<pair<ll,ll> > v;
    for(i=0; i<n; i++)
    {
        cin >> m;
        v.pb({m,i});
    }
    sort(v.begin(), v.end());
    ll st = 0,en=0,mx=0;
    v.pb({-1,n+1});
    for(i=0,j=1; j<=n; j++){
        if(v[j-1].first != v[j].first)
        {
            if(mx<(j-i))
            {
                mx = j-i;
                st = i;
                en = j;
            }
            i = j;
        }
    }
    for(i=0,k=st,j=en; i<n; i++,j++,k++)
    {
        d[v[k%n].second] = v[j%n].first;
    }
    for(i=0; i<n; i++)
        cout <<d[i]<<" ";
    cout <<endl;

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
