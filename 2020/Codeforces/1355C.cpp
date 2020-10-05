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
    ll i,j,a,b,c,d,l,r,n;
    cin >> a >> b >> c >> d;
    ll ans=0,mn;
    ll f,all = d-c+1;
    for(i=b; i<=c; i++)
    {
        l = max(a,(c+1-i));
        if(l>b) continue;
        r = max(l,(d+1-i));
        f = all;
        if(r>b)
        {
            f -= r-b;
            r = b;
        }
        n = r-l+1;
        mn = (b-r)*all;
        mn += n*(2*f-n+1)/2;
        ans += mn;    // cout <<l<<" "<<r<<" "<<n<<" "<<mn<<" "<<ans<<endl;
    }
    cout <<ans<<endl;
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


