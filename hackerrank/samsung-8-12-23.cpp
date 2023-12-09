/*
You are participating in a marathon, aiming to cover a distance of D km within a health capacity of H. There are five available running types, each requiring m[i] minutes, s[i] seconds, and c[i] health power to cover 1 km. You can switch the running type after every 1 km.

The objective is to complete the marathon in the minimum time while staying within the health power limit of H.

Input:
- T: test cases.
- H (5<=H<=600): total health power.
- D(1<=D<=40): distance to run.
- The next 5 lines contain m[i] (0<=m[i]<=6), s[i] (0<=s[i]<60), and c[i] (0<=c[i]<=100), representing the minutes, seconds, and health power required to run 1 km for each type.

Output:
Print the minimum time needed to complete the marathon in the format minutes seconds.
Case-1:
1
600 40
1 1 1
1 1 1
1 1 1
1 1 1
1 1 1
*/
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

ll H,D,tim[6],c[6];
ll ans,ct;

void rec(ll typ, ll km, ll health, ll cost) {      ct++;
    if( health > H)  return;
    if( km==D ) {
        ans = min(ans, cost);
        return;
    }
    if( typ>4 )   return;
    rec( typ+1, km, health, cost);
    rec( typ, km+1, health+c[typ], cost+tim[typ]);
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q,t,s;

    cin >> H >> D;
    for(i=0; i<5; i++) {
        cin >> t >> s >> c[i];
        tim[i] = t*60+s;
    }
    ans = 1e9;
    rec(0, 0, 0, 0);
    cout << ans/60 <<" "<<ans%60 <<endl;    cout <<ct<<endl;

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
