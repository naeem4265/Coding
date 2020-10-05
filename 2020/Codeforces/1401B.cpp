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
    ll x1,y1,z1,x2,y2,z2,t1,ans=0;
    cin >> x1 >>  y1 >> z1 >> x2 >> y2 >> z2;
    t1 = min(x1,z2);
    z2 = z2-t1;
    t1 = min(z1,z2);
    z2 = z2-t1;
    z1 = z1-t1;
    t1 = min(z2,y1);
    z2=z2-t1;
    if(t1)
        ans = -t1*2;
    ans += 2*min(z1,y2);
    cout <<ans<<endl;

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

