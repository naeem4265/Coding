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
vector<pair<ll,ll> > v;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    ll l=0, h=v.size()-1;
    ll ans = Mod;
    while(l<=h)
    {
        m = (l+h)/2;
        if(v[m].first>=n)
        {
            ans = v[m].second;
            h = m-1;
        }
        else
        {
            l = m+1;
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
    ll t,tt=1,i,pre=0,total=0;
    for(i=1; ; i++)
    {
        total += pre;
        v.pb({total,i});
        if(i%3!=0)
            pre += 2;
        if(total>=Mod) break;
    }
    sort(v.begin(), v.end());   //cout <<"size "<<v.size()<<endl;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
