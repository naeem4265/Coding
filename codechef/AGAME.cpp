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

bool rec(bool alice, ll a, ll b ) {
    if( a==0 && b==0 ) {
        if( alice )    return 0;
        return 1;
    } 
    if( (a+b)==1 )   return 0;
    if( alice ) {
        bool ok = 0;
        if( a>=2LL )   ok |= rec( !alice, a-2, b );
        if( b>=2LL )   ok |= rec( !alice, a, b-2 );
        return ok;
    } else {
        bool ok = 1;
        if( a )  ok &= rec( !alice, a-1, b+1);
        if( b )  ok &= rec( !alice, a+1, b-1);
        return ok;
    }
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll sum[2] = {0};

    for(i=0; i<n; i++ ) {
        cin >> m;
        if( i&1 )   sum[1] += m;
        else        sum[0] += m;
    }
    sum[0] %= 8LL;
    sum[1] %= 8LL;
    if( sum[0] > sum[1] )   swap(sum[0], sum[1]);

    if( rec(1, sum[0], sum[1] ) ) {
        cout <<"Alice\n";
        return ;
    }
    cout <<"Bob\n";

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
