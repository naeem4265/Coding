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
    ll a, b;
    cin >> a >> b;
    ll xk, yk, xq, yq;
    cin >> xk >> yk;
    cin >> xq >> yq;
    map<pair<ll,ll>, bool > mp, ok;

    mp[{xk+a, yk+b}] = 1;
    mp[{xk+a, yk-b}] = 1;
    mp[{xk-a, yk+b}] = 1;
    mp[{xk-a, yk-b}] = 1;
    mp[{xk+b, yk+a}] = 1;
    mp[{xk+b, yk-a}] = 1;
    mp[{xk-b, yk+a}] = 1;
    mp[{xk-b, yk-a}] = 1;

    ll ans = 0;
    ans += mp[{xq+a, yq+b}] ;
    ok[{xq+a, yq+b}] = 1;
    if( mp[{xq+a, yq-b}] && ok[{xq+a, yq-b}]==0) {
        ans++;
        ok[{xq+a, yq-b}] = 1;
    } ;
    if( mp[{xq-a, yq+b}] && ok[{xq-a, yq+b}]==0 ) {
        ans++;
        ok[{xq-a, yq+b}]=1;
    }
    if ( mp[{xq-a, yq-b}] && ok[{xq-a, yq-b}]==0 ) {
        ans++;
        ok[{xq-a, yq-b}] = 1;
    };
    if( mp[{xq+b, yq+a}] && ok[{xq+b, yq+a}]==0) {
        ans++;
        ok[{xq+b, yq+a}] = 1;
    } ;
    if( mp[{xq+b, yq-a}] && ok[{xq+b, yq-a}]==0) {
        ans++;
        ok[{xq+b, yq-a}] = 1;
    } ;
    if( mp[{xq-b, yq+a}] && ok[{xq-b, yq+a}]==0) {
        ans++;
        ok[{xq-b, yq+a}]=1;
    } ;
    if( mp[{xq-b, yq-a}] && ok[{xq-b, yq-a}]==0) {
        ans++;
        ok[{xq-b, yq-a}]=1;
    } ;

    

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
