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
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll x,y;
    vector<ll> X,Y;
    for(i=0; i<2*n; i++)
    {
        cin >> x >> y;
        x = abs(x);
        y = abs(y);
        if(x)
            X.pb(x);
        if(y)
            Y.pb(y);
    }
    sort(X.begin(),X.end());
    sort(Y.begin(),Y.end());
    double ans = 0;
    for(i=0; i<n; i++)
    {
        ans += sqrt(X[i]*X[i]+Y[i]*Y[i]);
    }
    cout <<fixed<<setprecision(16)<<ans<<endl;
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
