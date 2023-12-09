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

ll n, gate[4], fisherman[4], place[12], ans;

void rec(ll pos, ll g1, ll g2, ll g3) {

    if( g1>fisherman[1] || g2>fisherman[2] || g3>fisherman[3] )    return;

    if( pos>n ) {
        if( g1 != fisherman[1] || g2 != fisherman[2] || g3 != fisherman[3] )    return;

        ll sum = 0;
        for(ll i=1; i<=n; i++) {
            if( place[i] )
                sum += 1 + abs(gate[place[i]]-i);
        }
        if(ans>sum)
            ans = sum;
        return;
    }

    place[pos] = 0;
    rec(pos+1, g1, g2, g3) ;

    place[pos] = 1;
    rec(pos+1, g1+1, g2, g3) ;

    place[pos] = 2;
    rec(pos+1, g1, g2+1, g3) ;

    place[pos] = 3;
    rec(pos+1, g1, g2, g3+1) ;
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n;
    ans = 1e18;
    for(i=1; i<=3; i++)   cin >> gate[i];
    for(i=1; i<=3; i++)   cin >> fisherman[i];
    rec(1, 0, 0, 0) ;
    cout << ans << endl;


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
