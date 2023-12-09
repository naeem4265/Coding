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
#define limit 200008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k=1;
    string s;
    cin >> n;
    ll ans = n*(n+1)/2;
    map<ll,ll> mymap;
    mymap.clear();

    ll ind[limit],d[n+5];
    memset(ind,0,sizeof(ind));
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        d[i] = d[i]/__gcd(d[i],i);
        if(mymap[d[i]]==0)
            mymap[d[i]] = k++;
        ans -= ind[mymap[d[i]]];
        ind[mymap[d[i]]] = i-1;
    }        //cout << ans << endl;
    mymap.clear();
    k = 1;

    for(i=0; i<limit; i++)
        ind[i] = n;

    for(i=n; i>0; i--)
    {
        if(mymap[d[i]]==0)
            mymap[d[i]] = k++;
        ll x = (n-ind[mymap[d[i]]])*i;
        if(x>0)
        {
            n = ind[mymap[d[i]]];
            ans -= x;
        }
        ind[mymap[d[i]]] = i;
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
