#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll l,r,x,g,ans = 1e18;
    cin >> l >> r;
    for(g=1; g<=sqrt(r+1); g++)
    {
        ll x = l/g;
        if(l%g) x++;
        if((x+1)*g<=r)
            ans = min(ans, x*(x+1)*g);
    }
    for(x=1; x<=sqrt(r+1); x++)
    {
        g = l/x;
        if(l%x)  g++;
        if((x+1)*g<=r)
            ans = min(ans, x*(x+1)*g);
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
