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

ll bs(ll l[], ll r[], ll n) {
    ll ans = -1;
    ll lo = 0, hi = 1e9+5, m, i;
    while( lo <= hi ) {
        m = ( lo+hi )/2LL;
        ll mn = -m, mx = m;
        for( i=0; i<n; i++ ) {
            if( l[i]>mx || r[i]<mn ) {
                lo = m+1;
                break;
            }
            mn = max(mn-m, l[i]-m);
            mx = min(r[i]+m, mx+m);
        }
        if( i== n) {
            hi = m-1;
            ans = m;
        }
    }
    return ans;
}


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll l[n+5], r[n+5];
    l[n] = -1e9, r[n] = 1e9+5;
    ll pos[n+5];

    for(i=0; i<n; i++)    cin >> l[i] >> r[i];

    cout << bs(l, r, n) <<endl;


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
