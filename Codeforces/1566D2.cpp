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
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
            new_data_type;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >>n >> m;
    new_data_type myset[n+5];
    ll ans=0;

    ll d[n*m+5],dd[n*m+5];
    for(i=0,k=0; i<n; i++)
    {
        for(j=0; j<m; j++,k++)
        {
            cin >> d[k];
            dd[k] = d[k];
        }
    }
    sort(dd,dd+k);

    bool vis[n*m+5];
    memset(vis,0,sizeof(vis));
    map<ll,ll> mymap;
    ll pos[n*m+5];

    for(i=0,k=1; i<n*m; i++)
    {
        ll x = d[i];
        if(vis[mymap[x]]==0)
        {
            ll l=0,r=n*m-1,mid,idx=-1;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(dd[mid]==x)
                {
                    idx = mid;
                    r = mid-1;
                }
                else if(dd[mid]>=x)
                    r = mid-1;
                else
                    l = mid+1;
            }
            pos[k] = idx;
            mymap[x] = k++;
            vis[mymap[x]] = 1;
        }
        ll y,z,p;
        y = mymap[x];
        z = pos[y];
        pos[y]++;
        p = z/m;
        myset[p].insert(x);
        ans += myset[p].order_of_key(x);    //cout <<i<<" "<<x<<" "<<y<<" "<<z<<" "<<p<<" "<<ans<<endl;
    }
    cout << ans <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
