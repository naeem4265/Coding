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
    ll a[n+5], carry = 0, sum = 0;
    for(i=0; i<n; i++ ) {
        cin >> a[i];
        sum += a[i];
    }
    m = sum/n;
    for( i=0; i<n; i++ ) {
        carry += a[i];
        if( carry < m ) {
            cout << "NO\n";
            return;
        }
        carry -= m;
    }
    cout << "YES\n";

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
