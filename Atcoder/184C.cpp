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
    ll x1,x2,y1,y2, i,j,n,m,k;
    cin >> x1 >> y1 >> x2 >> y2 ;
    int ans=3;
    if(x1==x2 && y1==y2)
        ans = 0;
    else if((abs(x1-x2)+abs(y1-y2))<=3 || (x1+y1==x2+y2) || (x1-y1==x2-y2))
        ans = 1;
    else if((x1+y1)&1 && (x2+y2)&1 || ((x1+y1)%2==0 && (x2+y2)%2==0) || (abs(x1-x2)+abs(y1-y2))<=6 )
        ans = 2;
    else if(abs((x1+y1)-(x2+y2))<=3 || (abs(abs(x1-y1)-abs(x2-y2))<=3))
        ans = 2;
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

