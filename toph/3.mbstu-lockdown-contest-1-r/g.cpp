#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define TC int tt; cin >> tt; for(int t=0; t<tt; t++)
#define ll long long
#define pb push_back
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve()
{
    ll a,k,i,j,n,m,sum=0,mx=0,ind,ct=1;
    cin >> n >> m;
    if(n>m) n=m;
    ll D[m+5];
    for(i=0; i<m; i++)
        cin >> D[i];
    sort(D,D+m);
    ll sz=max((ll)0,m-n);
    for(i=m-1; i>=sz; i--)
        sum += D[i];
    cout <<sum<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    TC
        solve();
  return 0;
}

