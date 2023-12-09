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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    vector<ll> v(n);
    for(i=0; i<n; i++ ) {
        cin >> v[i];
    }
    if( k >= 3LL ) {
        cout <<0<<endl;
        return;
    }
    sort(v.begin(), v.end());
    if( k==1LL ) {
        ll mn = v[0];
        for(i=1; i<n; i++ ) {
            mn = min(mn, v[i]-v[i-1]);
        }
        cout << mn <<endl;
        return;
    }

    ll ans = v[0];
    for(i=0; i<n; i++ ) {
        for(j=i+1; j<n; j++ ) {
            ll d = v[j] - v[i];       
            ll lo = 0, hi = n-1, m, mn = -1e18, mx = 1e18;
            while( lo <= hi ) {
                m = (lo+hi)/2;
                if( v[m] >= d ) {
                    mx = v[m];
                    hi = m-1;
                } else {
                    lo = m+1;
                }
            }
            lo = 0, hi = n-1;
            while( lo <= hi ) {
                m = (lo+hi)/2;
                if( v[m] <= d ) {
                    mn = v[m];
                    lo = m+1;
                } else {
                    hi = m-1;
                }
            }
            ans = min({ans, d, mx-d, d-mn});
        }
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
