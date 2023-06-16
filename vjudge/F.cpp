#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,q;
    ll a,k;
    cin >> n;
    vector<pair<ll,ll> > v;
    for(i=0; i<n; i++)
    {
        cin >> k >> a;
        v.pb({k,a});
    }
    sort(v.begin(), v.end());
    n = v.size();
    v.pb({(v[n-1].first)+1, 1});
    for(i=0; i<n; i++)
    {
        m = v[i].second;
        ll ct = v[i].first;
        while(ct<v[i+1].first && m>1LL)
        {
            m = (m+3LL)/4LL;
            ct++;
        }

        v[i+1].second = max(v[i+1].second, m);   //cout <<i<<" "<<v[i+1].first<<" "<<v[i+1].second<<endl;
    }
    ll ans = v[n].first;
    m = v[n].second;
    while(m>1LL)
    {
        m = (m+3LL)/4LL;
        ans++;
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
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
