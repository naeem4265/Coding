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
    ll i,j,n,m,k;
    string s;
    cin >> n;
    vector<ll> v(n);
    for( i=0; i<n; i++ ) cin >> v[i];

    ll idx, mn = Mod;
    vector<ll> temp;

    for( i=0; i<n; i++ ) {
        mn = min( mn, v[i]);
        if( v[i] == mn ) {
            temp.pb( mn );
        }
    }
    reverse( temp.begin(), temp.end() );
    ll mx = 0;

    for( i=0; i<temp.size(); i++ ) {
        mx = max( mx, i + 1 - temp[i]);
    } 
    cout << n - mx <<endl;
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
