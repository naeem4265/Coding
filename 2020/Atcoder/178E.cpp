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
    int i,j,n,m;
    int px[2],py[2],nx[2],ny[2],x,y;
    px[0]=py[1]=-Mod;
    nx[0]=ny[1]=Mod;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> x >> y;
        if(x>px[0])
        {
            px[0]=x;
            px[1]=y;
        }
        if(x<nx[0])
        {
            nx[0]=x;
            nx[1]=y;
        }
        if(y>py[1])
        {
            py[1]=y;
            py[0]=x;
        }
        if(y<ny[1])
        {
            ny[1]=y;
            ny[0]=x;
        }
    }
    int ans = 0;
    ans = max(ans,abs(px[0]-nx[0])+abs(px[1]-nx[1]));
    ans = max(ans,abs(px[0]-py[0])+abs(px[1]-py[1]));
    ans = max(ans,abs(px[0]-ny[0])+abs(px[1]-ny[1]));
    ans = max(ans,abs(nx[0]-py[0])+abs(nx[1]-py[1]));
    ans = max(ans,abs(nx[0]-ny[0])+abs(nx[1]-ny[1]));
    ans = max(ans,abs(py[0]-ny[0])+abs(py[1]-ny[1]));
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

