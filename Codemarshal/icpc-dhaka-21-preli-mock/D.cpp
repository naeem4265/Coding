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
    ll i,j,n=tt,m,k,q;

   // cin >> n;
   //scanf("%lld", &n);
   //cout << n << ": ";
    m = (n+1)/2;
    ll ans = 0;
    for(i=1; ; i++)
    {
        ll st = m-i;
        if(st<i)  st = i;
        ll rem = n-i-st;
        if(rem<i)  break;
        ll len = rem-st+1;
        ans += (len+1)/2;   //cout <<i<<" "<<ans <<" "<<(len+1)/2<<endl;;
    }
    //cout << ans <<endl;
    //printf("%lld\n", ans);
    cout <<n<<" main "<<ans<<endl;

    return ;
}


int  main()
{
   // Fast
//    Freed
//    Fout
    ll t,tt=100;
    //cin >> tt;
   // scanf("%lld",&tt);
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
