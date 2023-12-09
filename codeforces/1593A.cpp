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
    ll a[4],b[4];
    cin >> a[0] >> a[1] >> a[2];
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
    sort(b,b+3);
    ll mx=b[2];
    if(b[1]==b[2])
    {
        mx++;
        cout <<mx-a[0]<<" "<<mx-a[1]<<" "<<mx-a[2]<<endl;
        return ;
    }
    cout << mx - a[0] + (a[0]!=mx)<<" "<<mx-a[1]+ (a[1]!=mx)<<" "<<mx-a[2]+ (a[2]!=mx)<<endl;

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
