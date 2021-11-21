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
    double i,j,n,m,R,r,mainCon,outerCon,A,s,delA;

    cin >> R >> n ;
    mainCon = 360.00/n;
    outerCon = (180-mainCon)/2.00;
    mainCon = mainCon*pi/180.00;
    outerCon = outerCon*pi/180.00;

    r = (R*cos(outerCon))/(1.00-cos(outerCon));
   // r = ((R+r)*cos(outerCon)+(R+r)*cos(outerCon));

    s = (R+r+R+r+r+r)/2.00;
    //A = sqrt(s*(s-r-r)*(s-R-r)*(s-R-r));     //cout <<A<<endl;
    A = (R+r)*(R+r)*sin(mainCon)/2.00;       //cout <<A<<" "<<<<endl;

    delA = A - R*R*mainCon/2.00 - r*r*outerCon;

    cout <<fixed<<setprecision(12)<<n*delA<<endl;

    //cout <<R<<" "<<r<<" "<<n<<" "<<mainCon<<" "<<outerCon<<" "<<s<<" "<<A<<" "<<R*mainCon<<" "<<r*outerCon<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
