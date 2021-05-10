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
    ll i,j,n,m,k,c;
    string s;
    cin >> n >> c;
    ll a[n+5],b[n+5];

    for(i=1; i<=n; i++)  cin >> a[i];
    for(i=1; i<n; i++)   cin >> b[i];

    ll ans = Mod;
    ll pre=0,sum=0;
    for(i=1; i<=n; i++)
    {
        ll temp = pre+(c-sum)/a[i];
        if((c-sum)%a[i]) temp++;
        ans = min(ans,temp);
        ll x = 0;
        if(b[i] > sum)
        {
            x = (b[i]-sum)/a[i];
            if((b[i]-sum)%a[i])   x++;
            sum += a[i]*x;
            pre += x;
        }
        x++;
        sum -= b[i];
        pre++;
    }
    cout << ans <<endl;
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
