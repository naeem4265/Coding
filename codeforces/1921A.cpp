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
    ll i,j,n,m,k,q, ans = 0;
    ll x[4], y[4];
    for(i =0; i<4; i++ )
    cin >> x[i] >> y[i];
    
    if( x[0] == x[1] )    ans = abs(y[0]-y[1]);
    else if( x[0]==x[2] )  ans = abs( y[0]- y[2]);
    else if( x[0]==x[3] )  ans = abs( y[0]-y[3]);
    

    cout << ans*ans << endl;
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
