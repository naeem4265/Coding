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
    ll a,b,x,y,n,ans=0;
    cin >> a >> b >> x >> y >> n;
    ll a1=a,b1=b,x1=x,y1=y,n1=n;
        ll temp = a-x;
        a -= min(temp,n);
        n -= min(temp,n);
        temp = b-y;
        b -= min(temp,n);
        ans = a*b;

        temp = b1-y1;
        b1 -= min(temp,n1);
        n1 -= min(temp,n1);
        temp = a1-x1;
        a1 -= min(temp,n1);
        ans = min(ans,a1*b1);
        cout <<ans<<endl;
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

