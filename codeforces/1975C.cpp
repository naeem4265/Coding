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

ll midle( ll a, ll b, ll c ) {
    if( a>=b && a <=c )  return a;
    if( b>=a && b<=c )  return b;
    if( c>=a && c<= b)   return c;
    if( a>=c && a<=b)   return a;
    if( b>=c && b<=a)  return b;
    if( c>=b && c<=a )  return c;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n ;
    ll a[n+5];
    ll ans = 0;
    for( i=0; i<n; i++ )  cin >> a[i];
    for( i=1; i<n; i++ ) {
        ans = max( ans, min( a[i], a[i-1]));
    }
    for( i=2; i<n; i++ ) {
        ans = max( ans, midle( a[i-2], a[i-1], a[i]));
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
