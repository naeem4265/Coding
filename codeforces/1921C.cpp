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
    ll i,j,n,k,q;
    ll f, a, b;
    cin >> n >> f >> a >> b ; 
    ll m[n+5];
    m[0] = 0;
    ll ans = 0;
    for( i=1; i<=n; i++ ) {
        cin >> m[i];
        ans += min( b, ( m[i]-m[i-1])*a );
    }
    if(f > ans )   cout << "YES\n";
    else           cout << "NO\n";

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
