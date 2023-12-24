#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
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
    bool upy=0,dny=0,lx=0,rx=0;
    ll x, y;
    for(i=0; i<n; i++  ) {
        cin >> x >> y;       //cout <<x<<" "<<y<<endl;
        if( x > 0 )  rx = 1;
        if( x < 0 )  lx = 1;
        if( y > 0 )  upy = 1;
        if( y < 0 )  dny = 1;   //cout <<upy<<" "<<dny<<" "<<lx<<" "<<rx<<endl;
    }       
    if( !upy || !dny || !lx || !rx ) {
        cout <<"YES\n";
        return;
    }
    cout <<"NO\n";

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
