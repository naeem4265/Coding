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
    ll x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2 >> n >> m;
    ll ans =  abs(x1-x2)+abs(y1-y2) ;
    if((x1==x2 && x1==n && m>=min(y1,y2) && m<=max(y1,y2)) || (y1==y2 && y1==m  && n>=min(x1,x2) && n<=max(x1,x2)))
        ans += 2;
    cout << ans << endl;
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
