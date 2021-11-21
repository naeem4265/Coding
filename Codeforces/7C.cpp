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

ll egcd(ll a,ll b,ll &x, ll &y)
{
    if(a==0)
    {
        x = 0;
        y = 1;
        return b;
    }
    ll x1,y1;
    ll d = egcd(b%a,a,x1,y1);
    x = y1-(b/a)*x1;
    y = x1;
    return d;
}
void solve(int t)
{
    ll a,b,c, i,j,n,m,x,y,g,d;
    cin >> a >> b >> c;
    g = __gcd(abs(a),abs(b));
    d = egcd(abs(a),abs(b),x,y);  //cout <<d<<endl;
    if(c%d)
    {
        cout <<"No\n"<<endl;
        return ;
    }
    cout <<(c*x/d)<<" "<<(c*y/d)<<endl;
    if((c*x/d)*-1 >c || (c*y/d)*-1 > c )
    {
        cout <<"No\n"<<endl;
        return ;
    }
    cout <<"Yes\n";
    return;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


