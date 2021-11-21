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
    ll a, b, c;
    cin >> a >> b >> c;
    if(a==b && b==c )
    {
        cout <<"Equilateral Triangle\n";
        return ;
    }
    if(a==b || b==c || a==c)
    {
        cout << "Isosceles Triangle\n";
        return ;
    }
    cout << "Bad Triangle\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout

//    #ifndef ONLINE_JUDGE
//       freopen("in.txt", "r", stdin);
//    //   freopen("out.txt", "w", stdout);
//    #endif // ONLINE_JUDGE

    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
