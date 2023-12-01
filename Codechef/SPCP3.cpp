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
    ll a,b,i,j;
    cin >> a >> b;
    ll ans = 0;
    for(i=a,j=b; ; i++,j--, ans++) {
        if( i%j==0 ) {
            break;
        }
    }
    ll ct = 0;
    for(i=a,j=b; i>0 ; i--,j++, ct++) {
        if( i%j==0 ) {
            break;
        }
    }
    if( i> 0 )   ans = min(ans, ct);
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
