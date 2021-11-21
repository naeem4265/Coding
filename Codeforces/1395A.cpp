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
    int a[5],k,i,j,n,mx=0,ct=0,sum=0;
    int b,c,d;
    cin >> a[0] >> a[1] >> a[2] >> d;
    sort(a,a+3);
    if(a[0]&1) ct++;
    if(a[1]&1) ct++;
    if(a[2]&1) ct++;
    if(ct<1 || (ct==1 && d%2==0) || (ct==2 && a[0] && d&1) || ct==3)
    {
        cout <<"Yes\n";
        return;
    }
    else
        cout <<"No\n";
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

