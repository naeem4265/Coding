#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define limit 1000008
using namespace std;

vector<ll> Pow;
void rec(ll b)
{
    Pow.clear();
    Pow.pb(0);
    for(; ; b*=2)
    {
        if(b>inf || b<1)
            break;
        Pow.pb(b+Pow.back());
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    ll x, y ;
    //cin >> x >> y;
    scanf("%lld %lld", &x, &y);
    rec(x);
    ll ans = -1;
    for(i=Pow.size()-1; i>0; i--)
    {                //cout <<i<<" "<<Pow[i]<<endl;
        if(y>=Pow[i])
        {
            y -= Pow[i];
            ans += i;
            ans++;
        }
    }
    if(y) ans = -1;
    //cout << ans << endl;
    printf("%lld\n",ans);
    return ;
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
