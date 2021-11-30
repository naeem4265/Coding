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
    int i,n,d1,m1,c1,d2,m2,c2,R,ck=1;
    cin >> d1 >> m1 >>  c1 >> R ;
    cin >>n;
    for(i=0; i<n; i++)
    {
        cin >> d2 >> m2 >> c2;
        if(d1==d2 &&  m1==m2)
        {
            if(c1!=c2 || R==0)
                ck = 0;
        }
    }
    if(ck)
        cout <<"Case "<<t<<": Yes\n";
    else
        cout <<"Case "<<t<<": No\n";
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


