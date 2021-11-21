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
    string mon,day;
    cin >> mon >> day ;
    ll ans = 8;
    if(mon=="JAN" || mon=="MAR" || mon=="MAY" || mon=="JUL" || mon=="AUG" || mon=="OCT" || mon=="DEC")
    {
        if(day=="THU" || day=="FRI")
            ans += 2;
        if(day=="WED" || day=="SAT")
            ans += 1;
    }
    if(mon=="APR" || mon=="JUN" || mon=="SEP" || mon=="NOV")
    {
        if(day=="FRI")
            ans += 2;
        if(day=="THU" || day=="SAT")
            ans += 1;
    }
    cout << ans <<endl;
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
