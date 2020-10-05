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
#define inf 1e18
using namespace std;

void solve(int t)
{
    ll a,k,i,j,n,mx=-inf,mn=inf,ct=1,sum=0;
    cin >> n >>k;
    ll D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> D[i];
        if(mn>D[i])
            mn = D[i];
        if(mx<D[i])
            mx = D[i];
    }
    k--;
    for(i=0; i<n; i++)
        D[i] = mx-D[i];
    mx = mx-mn;
    for(i=0; i<n; i++)
    {
        if(k&1)
            cout <<mx-D[i]<<" ";
        else
            cout <<D[i]<<" ";
    }
    cout<<endl;
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


