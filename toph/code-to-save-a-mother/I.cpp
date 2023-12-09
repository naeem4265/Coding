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
    double j,n,m,k;
    string s;
    scanf("%lf", &n);

    double a = n/3.00,b,c;
    double l=0.00,r=a;
    ll i = 100;
    while(i--)
    {
        m = (l+r)/2.00;
        b = (a-m)/2.00;
        c = b*sqrt(3.00);
        if((c-m)>0.0)
            l = m+1;
        else
            r = m-1;
    }          cout << c << endl;
    double area = pi*c*c/4.00;
    double tarea = a*a*sqrt(3.00)/4.00;
    printf("%.15lf\n",tarea-area);
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
