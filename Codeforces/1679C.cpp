#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
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
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
            new_data_type;
ll frerow[limit],frecol[limit];

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    new_data_type row,col;

    cin >> n >> q;
    ll t,x,y,x2,y2;
    while(q--)
    {
        cin >> t;
        if(t==1)
        {
            cin >> x >> y ;
            frerow[x]++;
            frecol[y]++;
            row.insert(x);
            col.insert(y);
        }
        else if(t==2)
        {
            cin >> x >> y;
            frerow[x]--;
            frecol[y]--;
            if(frerow[x]==0)
                row.erase(row.find(x));
            if(frecol[y]==0)
                col.erase(col.find(y));
        }
        else
        {
            cin >> x >> y >> x2 >> y2;
            ll ct = row.order_of_key(x2+1)-row.order_of_key(x);
            ll ct2 = col.order_of_key(y2+1)-col.order_of_key(y);
            if(ct>=(x2-x+1) || ct2>=(y2-y+1))
            {
                cout <<"YES\n";
            }
            else
                cout <<"NO\n";
        }
    }
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
        solve(t);
    return 0;
}
