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
    ll i,j,n,m,a,d,s,xx,yy;
    cin >> n;
    ll x[n+2],y[n+2];
    for(i=0; i<n; i++)
    {
        cin >> x[i] >> y[i];
        a = y[i]/x[i];
        d = a;
    }
    if(n>1)
    {
        if(x[0]>x[1])
        {
            swap(x[0],x[1]);
            swap(y[0],y[1]);
        }
            xx = x[1]-x[0];
            yy = y[1]-y[0];
            d = yy/xx;
            a = y[1]-(x[1]-1)*d;
    }
    cin >> n;   //cout <<a<<" "<<d<<" "<<n<<endl;
    s = n*(2*a+(n-1)*d)/2;
    cout <<"Case "<<t<<": "<<s<<endl;
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

