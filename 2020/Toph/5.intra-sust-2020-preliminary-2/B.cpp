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
    double m,n,d,ans=0,x,y,z,l,r,mid,pre,cen,mx1,mx2;
    cin >> m >> n >> d;
    if(min(n,m)<=0)
    {
        printf("%.10lf\n",d*max(n,m));
        return ;
    }
    if(n>m)  swap(n,m);
    l = sqrt(d/2);
    r = d;
    cen = (l+r)/2;
    x = sqrt(d*d-cen*cen);
    y = sqrt(d*d-x*x);
    pre = max(d*max(n,m),x*m+y*n);
    for(int i=0; i<100; i++)
    {
        mid = (l+cen)/2;
        x = sqrt(d*d-mid*mid);
        y = sqrt(d*d-x*x); //cout <<x<<" "<<y<<" "<<mid<<" "<<l<<" "<<r<<endl;
        mx1 = m*x+y*n;
        mid = (r+cen)/2;
        x = sqrt(d*d-mid*mid);
        y = sqrt(d*d-x*x);
        mx2= m*x+n*y;
        if(mx1>mx2)
        {
            r = cen;
            cen = (l+r)/2;
        }
        else
        {
            l = cen;
            cen=(l+r)/2;
        }
        pre = max(pre,max(mx1,mx2));
    }
    printf("%.10lf\n",pre);
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


