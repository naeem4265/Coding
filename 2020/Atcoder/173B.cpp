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
    int a,k,i,j,n,sum=0,mx=0,ind,ct=1;
    int ac=0,wa=0,tle=0,re=0;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> s;
        if(s[0]=='A')ac++;
        if(s[0]=='W')wa++;
        if(s[0]=='T')tle++;
        if(s[0]=='R')re++;
    }
    cout <<"AC x "<<ac<<endl;
    cout <<"WA x "<<wa<<endl;
    cout <<"TLE x "<<tle<<endl;
    cout <<"RE x "<<re<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
 //   TC
        solve();
  return 0;
}

