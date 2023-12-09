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
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll> >, rb_tree_tag,
             tree_order_statistics_node_update>
            new_data_type;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> m;
    ll ct[n+5];
    memset(ct, 0, sizeof(ct));
    for(i=0; i<m; i++)
    {
        ll x;
        cin >> x;
        ct[x]++;
    }
    if(n==1)
    {
        cout <<ct[1]<<endl;
        return ;
    }
    new_data_type pbds;

    for(i=1; i<=n; i++)
    {
        pbds.insert({ct[i],i});
    }
    pair<ll,ll> z0,zn;
    ll sz = pbds.size();
    while(1)
    {
        z0 = *(pbds.find_by_order(0));
        zn = *(pbds.find_by_order(sz-1));
        if((zn.first-1)<(z0.first+2))  break;
        pbds.erase(pbds.find_by_order(0));
        pbds.erase(pbds.find_by_order(sz-1));
        z0.first += 2;
        zn.first -= 1;
        pbds.insert(z0);
        pbds.insert(zn);
    }
    zn = *(pbds.find_by_order(sz-1));
    cout << zn.first << endl;

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
