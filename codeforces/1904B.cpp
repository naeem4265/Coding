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
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll a[n+5];
    vector<pair<ll,ll> > v(n);
    for(i=0; i<n; i++) {
        cin >> v[i].first;
        a[i] = v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for(i=1; i<n; i++ ) {
        v[i].first += v[i-1].first;
    }
    ll ans[n+5];
    ans[ v[n-1].second ] = n-1;
    for( i=n-2; i>=0; i-- ) {
        if( v[i].first>=a[v[i+1].second] ) {
            ans[v[i].second ] = ans[v[i+1].second];
        }
        else ans[v[i].second] = i;     //cout <<i<<" "<<v[i].second<<" "<<v[i].first<<" "<<ans[v[i].second] <<endl;
    }
    for(i=0; i<n; i++)   cout << ans[i] <<" ";  cout <<endl;



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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
