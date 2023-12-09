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


void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll a[n+5], b[n+5], ans[n+5],pr[n+5],link[n+5];
    memset(ans, 0, sizeof(ans));
    memset(pr, -1, sizeof(pr));

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    for(i=1; i<=n; i++)
    {
        cin >> b[i];
        pr[min(n, i+b[i])] = i;
    }
    b[0] = 0;

    new_data_type pbds;
    pbds.insert(0);
    for(i=1; i<=n; i++)
    {       cout <<i<<" "<<pr[i]<<endl;
        if(pr[i]==-1)   continue;
        ll d = -(i - a[i]);
        ll ct = pbds.order_of_key(d+1);
        if(ct==0)  continue;
        ll mn = *(pbds.find_by_order(ct-1));
        mn = -mn;          cout <<i<<" "<<d<<" "<<ct<<" "<<mn<<" "<<ans[mn]<<endl;
        ans[pr[i]] = ans[mn]+1;

        pbds.insert(-pr[i]);
        link[i] = mn;
    }
    if(ans[n]==0)
    {
        cout <<-1<<endl;
        return ;
    }
    cout << ans[n] <<endl;
    ll x = n;
    while(link[x])
    {
        cout <<link[x]<<" ";
        x = link[x]+b[link[x]];
    }
    cout <<0<< endl;
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
