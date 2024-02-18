#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
ll Mod;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> m ;
    Mod = m;
    ll a[n+5];
    for( i=0; i<n; i++ ) {
        cin >> a[i];
    }
    cin >> s;
    vector<pair<ll,ll> > v;
    for( ll i=0, l=0, r= n-1; i<n; i++ ) {
        if( s[i]=='L' )  {
            v.pb({-i, a[l++]});
        } else {
            v.pb({-i, a[r--]});
        }
    }
    sort( v.begin(), v.end() );
    ll ans[n+5];
    ll mul = 1;
    for(i=0; i<n; i++ ) {
        mul = (mul*v[i].second)%m;
        ans[-v[i].first] = mul;
    }
    for( i=0; i<n; i++ )   cout << ans[i]<<" ";
    cout << endl;

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
