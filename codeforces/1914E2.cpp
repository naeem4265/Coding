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

struct stc{
    ll a, b, d;
};

bool operator<(stc x, stc y) {
    return x.d > y.d;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    stc arr[n+5];
    for(i=0; i<n; i++ )  cin >> arr[i].a;
    for(i=0; i<n; i++ )  cin >> arr[i].b;
    for(i=0; i<n; i++ )  arr[i].d = arr[i].a + arr[i].b;
    sort( arr, arr+n);
    ll ans = 0;
    for(i=0; i<n; i++ ) {
        if( i&1 )   ans -= arr[i].b-1;
        else        ans += arr[i].a-1;
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
