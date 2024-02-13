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
    cin >> n ;
    ll a[n+5];
    for( i=0; i<n; i++ ) {
        cin >> a[i];
    }
    ll l=1, r = 1;
    while( l < n && a[l] == a[l-1])   l++;
    for( i=n-2,r=1; i>=0; i--,r++ ) {
        if( a[i] != a[i+1] )   break;
    }
    ll ans = max( l, r);
    if( a[0] == a[n-1] )  ans = min( n, l+r );
    cout << n - ans <<endl;

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
