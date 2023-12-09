#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e3+5;
const ll Mod = 1e9+7;
using namespace std;
ll a[limit], b[limit], n;

ll rec(ll l, ll r) {
    if( l>r )   return 1;
    ll idx = l;
    for(ll i=l; i<=r; i++) {
        if( b[idx]>b[i] )  idx = i;
    }
    ll i,j;
    for( i=idx; i>=0; i-- ) {
        if( a[i] > b[idx] || b[i]<b[idx]) {
            i = -1;
            break;
        }
        if( a[i]==b[idx])   break;
    }
    for( j=idx; j<n; j++ ) {
        if( a[j] > b[idx] || b[j]<b[idx]) {
            j = n;
            break;
        }
        if( a[j]==b[idx])   break;
    }
    if( i<0 && j>=n )  return 0; 
    bool x = rec(l, idx-1), y = rec(idx+1, r);      //cout <<l<<" "<<r<<" here "<<idx<<" "<< x <<" "<< y <<endl;
    return x & y;
}

void Please_AC(ll tt)
{
    ll i,j,m,k,q;
    string s;
    cin >> n;
    for( i=0; i<n; i++ )   cin >> a[i];
    for( i=0; i<n; i++ )   cin >> b[i];

    if ( rec(0, n-1 ) ) {
        cout <<"YES\n";
        return;
    }
    cout <<"NO\n";
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
