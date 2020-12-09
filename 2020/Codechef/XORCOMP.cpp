#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(int t)
{
    ll i,j,x,y,n;
    cin >>x >> y >> n ;
    if(x==y)
    {
        cout <<0<<endl;
        return ;
    }
    ll bit;
    for(i=30; i>=0; i--)
    {
        bit = 1<<i;
        if((x&bit) != (y&bit))
            break;
        bit = bit>>1LL;
    }
    ll ans=0;

    int fbit=0;
    if(x>y) fbit=bit;
    n++;
    ll m = 1;
    for(i=30; i>=0; i--)
    {
        m = 1<<i;
        if((m&n)==0) continue;
        if(m>bit)
            ans += (m>>1);
        else if(m==bit && (x<y))
            ans += m;
        else if(m<bit && (bit&n)==fbit)
            ans += m;
        //cout <<i<<' '<<m<<" "<<bit<<' '<<ans<<endl;
    }
    cout << ans <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

