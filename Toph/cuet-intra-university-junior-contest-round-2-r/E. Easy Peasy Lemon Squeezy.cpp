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

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
            new_data_type;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    new_data_type d;
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        ll l=0,r=i-1,ct=0;
        d.insert(x);
        ct = d.order_of_key(x+1);
        //cout << ct<<" " <<i<<endl;
        ans += i+1-ct;
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
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
