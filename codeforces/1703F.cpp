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

///PBDS or Order set/multiset/map any operation O(logn)
///insert,erase,size,order_of_key,find_by_order
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
            new_data_type;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    new_data_type pbds;
    ll ans = 0;
    for(i=n; i>0; i--)
    {
        if(i<=d[i])  continue;
        ans += (pbds.size()-pbds.order_of_key(i+1));
        //cout <<i<<" "<<ans<<" "<<pbds.size()<<" "<<pbds.order_of_key(i+1)<<endl;
        pbds.insert(d[i]);
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
        Please_AC(t);
    return 0;
}
