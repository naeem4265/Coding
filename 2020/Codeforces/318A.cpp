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
    ll a,k,i,j,n,mx=0,ct=1,sum=0;
    cin >> n >> k;
    if(k<=(n+1)/2)
    {
        cout <<k*2-1<<endl;
    }
    else
    {
        k -= (n+1)/2;
        cout <<k*2<<endl;
    }
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


