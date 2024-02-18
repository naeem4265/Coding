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

map<ll,ll> mp;

ll Find( ll m ) {
    if( mp[m] == 0 )   return m;
    return mp[m] = Find( mp[m] );
}


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n ;
    ll a[n+5];
    for( i=1; i<=n; i++ )   cin >> a[i];
    mp.clear();

    vector<ll> ans;
    for( i=n; i>0; i-- ) {
        m = a[i]+i;
        m = Find( m );
        mp[m] = m-1;
        ans.pb(m);
    }
    sort( ans.begin(), ans.end() );
    reverse( ans.begin(), ans.end());

    for( ll x: ans )    cout << x <<" ";
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
