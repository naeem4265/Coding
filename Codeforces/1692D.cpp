#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ll hh,mm,x;
    char ch;
    cin >> hh >> ch >> mm;
    cin >> x;
    map<pair<ll,ll>,bool > mp;
    ll ans = 0;
    while(mp[{hh,mm}]==0)
    {
        ll d1 = hh%100, d2 = hh%10, d3 = mm%100, d4 = mm%10;
        for(d1=0; d1<3; d1++)
        {
            if((d1*10+d2)==hh) break;
        }
        for(d3=0; d3<6; d3++)
        {
            if((d3*10+d4)==mm) break;
        }
        if(d1==d4 && d2==d3)
        {
            ans++;   //cout <<d1<<" "<<d2<<" "<<d3<<" "<<d4<<" "<<ans<<" "<<hh<<" "<<mm<<endl;
        }
        //cout <<hh<<" "<<mm<<" "<<ans<<endl;
        mp[{hh,mm}] = 1;
        mm += x;
        ll h = mm/60;
        mm -= h*60;
        hh = (hh+h)%24;
    }
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
        Please_AC(t);
    return 0;
}
