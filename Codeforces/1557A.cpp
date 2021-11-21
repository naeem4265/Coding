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
    cin >> n;
    ll d[n+5];
    d[0] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    sort(d+1,d+n+1);
    for(i=1; i<=n; i++)
    {
        d[i] += d[i-1];
    }
    double ans=-1e18*1.00,z,zz;
    double x = 0.00,y=(double)n;
    for(i=1; i<n; i++)
    {
        x += 1.00;
        y -= 1.00;
        z = (double)d[i];     // cout <<z<<" "<<x<<endl;
        z = z/x;
        zz = (double)(d[n]-d[i]);
        zz = zz/y;
        if(ans < (z+zz))
            ans = z+zz;      //cout <<i<<" "<< ans <<" "<<z<<" "<<zz<< endl;
    }
    cout <<fixed<<setprecision(10)<< ans <<endl;
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
