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
    ll h,w, xa, xb, ya, yb;
    cin >> h >> w >> xa >> ya >> xb >> yb ;
    ll dis = xb - xa;
    if( dis <= 0 ) {
        cout << "Draw\n";
        return;
    }
    if( dis&1 ) {
        ll move = dis/2;
        ll aliceleft = max(1LL, ya - move - 1);
        ll aliceright = min( w, ya + move + 1);
        ll bobleft = max(1LL, yb-move );
        ll bobright = min( w, yb+move );   //cout << bobleft <<" "<<aliceleft <<" "<<bobright<<" "<<aliceright<<endl;
        if( bobleft < aliceleft || bobright > aliceright ) {
            cout << "Draw\n";
            return;
        }
        cout <<"Alice\n";
    }
    else  {
        ll move = dis/2;
        ll aliceleft = max(1LL, ya - move);
        ll aliceright = min( w, ya + move);
        ll bobleft = max(1LL, yb-move );
        ll bobright = min( w, yb+move );
        if( bobleft > aliceleft || bobright < aliceright ) {
            cout << "Draw\n";
            return;
        }
        cout <<"Bob\n";
    }
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
