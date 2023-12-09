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
    int i,j,n,m,k;
    double R;
    cin >> n >> R;
    double x[n+2],y[n+2];
    for(i=0; i<n; i++)
    {
        cin >> x[i] >> y[i];
    }
    double ans=2.0*pi*R;
    if(n==1)
    {
        printf("%.2lf\n",ans);
        return ;
    }
    for(i=0; i<n; i++)
    {
        double a;
        a = sqrt((x[i]-x[(i+1)%n])*(x[i]-x[(i+1)%n])+(y[i]-y[(i+1)%n])*(y[i]-y[(i+1)%n]));
        ans += a;
    }
    printf("%.2lf\n",ans);
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

//Accepted
