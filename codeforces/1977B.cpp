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
    cin >> n ;
    vector<pair<ll,ll> > ans;
    ll sign = 1;
    while( n ) {
        m = log2(n);
        ll sum = 0;
        while(m >= 0LL ) {
            sum += pow(2LL, m);
            m -= 2;
        }
        m = log2(n);
        if( sum >= n ) {
            n -= pow(2LL, m);
            ans.pb( {m, sign });
        } else {
            n = pow(2LL, m+1) - n;
            ans.pb( {m+1, sign});
            sign = sign*-1LL;
        }
    }
    sort( ans.begin(), ans.end() );
    ll idx = 0;
    vector<ll> v;
    for(i=0; i<ans.size(); idx++ ) {
        if( ans[i].first == idx ) {
            v.pb(ans[i].second);
            i++;
        } else {
            v.pb(0);
        }
    }
    cout << v.size() <<endl;
    for( ll x: v )  cout <<x <<" ";
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
