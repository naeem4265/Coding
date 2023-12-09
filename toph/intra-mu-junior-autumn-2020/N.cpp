/*
Idea from Mizan
Thanks goes to Mizan dost
*/
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

void solve(int t)
{
    double x,y,z,a,b,c,d;
    cin >> x >> y >> z;
    double ans;
    a = (x+y)/2.00;
    b = max(x,y)-a;
    c = z;
    d = (a*a-b*b-c*c)/(2.00*c);
    ans = sqrt(d*d+a*a);
    cout <<fixed<<setprecision(12)<<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

