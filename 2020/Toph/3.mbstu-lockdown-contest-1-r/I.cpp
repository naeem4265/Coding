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
    int k,i,j,n,ans=0,mx=0,ind,ct=0;
    cin >> n;
    char a;
    for(i=0; i<n; i++)
    {
        cin >> a;
        if(a=='0') ct++;
        else
        {
            if(ct&1) ans++;
            ct=0;
        }
    }
    cout <<ans<<endl;
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

