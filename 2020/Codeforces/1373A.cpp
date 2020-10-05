#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdin);
#define TC int tt; cin >> tt; for(int t=0; t<tt; t++)
#define ll long long
#define pb push_back
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve()
{
    ll a,b,c,k,i,j,n,sum=0,mx=0,ind,ct=1;
    cin >> a >> b >> c;
    if(a>=c)
        cout <<"-1 ";
    else
        cout <<"1 ";
    if(a*b<=c)
        cout <<"-1\n";
    else
        cout <<b<<"\n";
}
int  main()
{
    TC
        solve();
  return 0;
}
