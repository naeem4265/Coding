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


///PBDS or Order set/multiset/map any operation O(logn)
///insert,erase,size,order_of_key,find_by_order
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
            new_data_type;

new_data_type pbds;

ll bs(ll key ) {
    ll temp = pbds.order_of_key(key);
    ll ans = *pbds.find_by_order(temp);
    pbds.erase(ans);
    return ans;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll l[n] , c[n];
    pbds.clear();

    for( i=0; i<n; i++ )     cin >> l[i];

    for( i=0; i<n; i++ ) {
        cin >> m;
        pbds.insert(m);
    }
    for( i=0; i<n; i++ )    cin >> c[i];
    sort( l, l+n );
    sort( c, c+n );
    reverse( c, c+n);

    ll d[n];
    for( i=n-1; i>=0; i-- ) {
        d[i] = bs(l[i]) - l[i];
    }
    sort( d, d+n );
    ll ans = 0;
    for( i=0; i<n; i++ ) {
        ans += d[i]*c[i];
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
