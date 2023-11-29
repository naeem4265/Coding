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

ll rec(ll node, string &s, ll l[], ll r[]) {
    if( !l[node] && !r[node] )   return 0;
    ll x = 1e9, y = 1e9;
    if( l[node] )   x = rec(l[node], s, l, r) ;
    if( s[node-1] != 'L') x++;
    if( r[node] )   y = rec(r[node], s, l, r);
    if( s[node-1] != 'R') y++;
    return min(x, y);
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    cin >> s;
    ll l[n+1], r[n+1];
    for(i=1; i<=n; i++) {
        cin >> l[i] >> r[i];
    }
    cout << rec(1, s, l, r) <<endl;

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
