#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define TC int tt; cin >> tt; for(int t=0; t<tt; t++)
#define ll long long
#define pb push_back
#define pi acos(-1.0)
#define limit 1000008
using namespace std;

void solve()
{

}
int  main()
{
//    Fast
//    Freed
//    Fout
    int tt,t;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        double a,k,r;
        cin >> r >> a;
        r = r*2;
        printf("Case %d: %.4lf\n",t,acos(a/r)*180/pi);
    }
  return 0;
}

