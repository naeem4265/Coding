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
    cin >> s;
    ll sum = 0;
    for( i=0; i<n; i++ ) {
        sum += s[i]-'0';
    }
    ll carry = 0;
    vector<ll> v;
    for( i=n-1; i>=0; i-- ) {
        sum -= s[i]-'0';
        ll x = s[i]-'0';
        x += carry;
        x += sum;
        v.pb( x%10LL );
        carry = x/10;
    }
    while( carry ) {
        v.pb( carry%10LL );
        carry /= 10LL;
    }
    reverse( v.begin(), v.end() );
    bool ok = 0;
    for( ll x: v )  {
        if( x || ok ) {
            cout << x ;
            ok = 1;
        }   
    }
    cout <<endl;

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
