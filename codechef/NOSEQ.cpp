#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
const ll inf = 1e18;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,s;
    cin >>  k ;
    vector<ll> v;
    v.pb(1);
    m = k;
    ll sz = 1;
    while( m>v[sz-1] )
    {
        v.pb(m);
        if(m>=inf)    break;
        m = m*k;
        sz++;  cout << m <<endl;
    }
    unsigned ll x = 833747762130149888;
    cout << x*98 <<endl;
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

