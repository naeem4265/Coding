#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll j,m,k,q;
    long long int i,n;
    cin >> n;
    ll a[n+2];
    for(i=0; i<n; i++ )  {
        cin >> a[i];
    }
    ll ans = 0;
    for( i=1; i*i <= n; i++ ) {
        if( n%i )     continue;
        m = i;

        ll g=Mod;
        for( j=0; j<m; j++ ) {
            bool ok = 1;
            vector<ll> v;
            for( k=j; k<n; k+=m ) {
                if( a[k]>1 )   ok = 0;
                v.pb(a[k]);
            }
            sort(v.begin(), v.end() );
            ll sz = v.size();
            if( sz < 2 || ok )   continue;
            if( g==Mod )
                g = v[1]-v[0];
            for(k = 1; k<sz; k++ )   g = __gcd(g, v[k]-v[k-1]); 
        }
        if( g != 1 )  ans++;     // cout <<i<<" "<<j<<" "<<g<<" "<<ans<<endl;
        
        
        m = n/i;
        if( i == m )   continue;

        g=Mod;
        for( j=0; j<m; j++ ) {
            bool ok = 1;
            vector<ll> v;
            for( k=j; k<n; k+=m ) {
                if( a[k]>1 )   ok = 0;
                v.pb(a[k]);
            }
            sort(v.begin(), v.end() );
            ll sz = v.size();
            if( sz < 2 || ok )   continue;
            if( g==Mod )
                g = v[1]-v[0];
            for(k = 1; k<sz; k++ )   g = __gcd(g, v[k]-v[k-1]); 
        }
        if( g != 1 )  ans++;    ///  cout <<i<<" "<<j<<" "<<g<<" "<<ans<<endl;
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
