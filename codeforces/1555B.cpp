#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    ll H,W,h,w,x1,y1,x2,y2,l=inf,r=inf;
    cin >> H >> W;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> h >> w;
    if( (h+(x2-x1)) > H && (w+(y2-y1))> W)
    {
        cout << - 1 << endl;
        return ;
    }
    double ans = 0;
    if((h+(x2-x1)) <= H)
        l = max(0LL, h-max(x1,H-x2));
    if((w+(y2-y1)) <= W)
        r = max(0LL, w-max(y1,W-y2));
    ans = (double)min(l,r);
    cout <<fixed<<setprecision(8) << ans << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
