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
    ll a[n+5],b[n+5],c[n+5];
    for(i=0; i<n; i++) cin >> a[i] >> b[i];
    for(i=0; i<n; i++) cin >> c[i];
    for(i=1; i<n; i++)
    {
        c[i] += a[i]-b[i-1];
    }

    ll crr = 0;
    crr = ceil((b[0]-a[0])/2.00);
    a[0] = a[0] + c[0];
    b[0] = max(crr+a[0],b[0]);
    for(i=1; i<n; i++)
    {
        crr = ceil(abs(b[i]-a[i])/2.00);
        a[i] = c[i]+b[i-1];

        b[i] = max(crr+a[i],b[i]);    //cout <<i<<" "<<crr<<" "<<a[i]<<" "<<b[i]<<endl;
    }
    cout << a[n-1] <<endl;
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
