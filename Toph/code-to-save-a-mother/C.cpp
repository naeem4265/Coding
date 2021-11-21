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

void solve(ll t)
{
    ll i,j,n,m,k;
    ll a,b,c,x,y,z;
    cin >> a >> b >> c >> x >> y >> z ;
    a -= x;
    b -= y;
    c -= z;
    n = __gcd(a,__gcd(b,c));
    x = max(x,max(y,z));
    if(a==0 || b==0 || c==0)
    {
        cout <<"Impossible\n";
        return ;
    }
    cout << n <<endl;
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
