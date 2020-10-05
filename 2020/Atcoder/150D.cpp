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
    ll i,j,n,m,ans=1,ct=0;
    cin >> n >> m;
    ll A[n+5];
    for(i=0; i<n; i++)
    {
        cin >> A[i];
        A[i] /= 2;
        ans = (ans*A[i])/__gcd(ans,A[i]);
    }
    for(i=n-1; i>=0; i--)
    {
        if((ans/A[i])%2==0)
        {
            cout <<0<<endl;
            return ;
        }
    }
    ct = m/ans;
    cout <<(ct+1)/2<<endl;
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

