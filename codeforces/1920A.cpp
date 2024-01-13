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
    cin >> n;
    ll x[n+5];
    ll mx = Mod, mn = 0;
    for(i=0; i<n; i++ ){
        cin >> tt;
        cin >> x[i];
        if( tt==1 ){    mn = max( mn, x[i]); x[i] = -1; }
        if( tt==2 ) {   mx = min( mx, x[i]);  x[i] = -1;}
    }
    sort( x, x+n);
    ll ans = mx - mn + 1;
    for(i=0; i<n; i++ ) {
        if( i && x[i]==x[i-1])  continue;
        if( x[i] >= mn && x[i] <= mx )   ans--;
    }
    cout << max(0LL, ans) <<endl;
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
