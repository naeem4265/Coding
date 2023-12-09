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
    ll n,p,q,x,y,ans;
    cin >> n >> p >> q >> x >> y;
    ll cnt = p/x;
    cnt = min(cnt, n);
    ll a = p-cnt*x+x;
    ans = cnt*(2LL*a+(cnt-1)*x)/2LL;  //cout << cnt<<" "<<a<<" "<<ans<<endl;
    cnt = q/y;
    cnt = min(cnt, n);
    a = q-cnt*y+y;
    ans = min(ans, cnt*(2LL*a+(cnt-1)*y)/2LL);  //cout <<cnt<<" "<<a<<" "<<ans<<endl;
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
