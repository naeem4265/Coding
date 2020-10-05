#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
ll ct[limit];
void solve(int t)
{
    ll a,k,i,j,n,mx=0,sum=0;
    cin >> n;
    for(i=0; i<n ;i++)
    {
        cin >> a;
        ct[a] += a;
    }
    for(i=limit-5; i>=0; i--)
    {
        ct[i] = ct[i]+max(ct[i+2],ct[i+3]);
    }
    cout << max(ct[0],ct[1])<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

